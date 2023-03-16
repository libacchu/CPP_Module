/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:01:18 by libacchu          #+#    #+#             */
/*   Updated: 2023/03/16 17:03:46 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string input) : _input(input)
{
	std::ifstream file_input;
	std::string hello;

	file_input.open(input.c_str());
	if (!file_input.is_open()) {
		std::cerr <<  "Error: could not open file." << std::endl;
		return ;
	}
	if (createDatabase("data.csv") == false)
	{
		file_input.close();
		return ;
	}
	readInput(file_input);
	file_input.close();
}

void BitcoinExchange::readInput(std::ifstream &file_input)
{
	std::string buffer;
	int line_nbr = 1;
	getline(file_input, buffer);
	if(file_input.eof())
	{
		std::cerr <<  "Error: Empty file" << std::endl;
		return ;
	}
	while(getline(file_input, buffer))
	{
		line_nbr++;
		std::string date, value;
		std::istringstream ss(buffer);
		
		getline(ss, date, '|');
		if (isDateValid(date) == false)
		{
			std::cerr << "Error: bad input => " << date << std::endl;
			date = "";
			continue;
		}
		getline(ss, value, '|');
		double bitcoin_value = atof(value.c_str());
		if (isValueValid(bitcoin_value, value) == false)
		{
			std::cerr << "Error: bad input => " << value << std::endl;
			value = "";
			continue;
		}
		std::map<std::string, double>::iterator it = _database.find(date);
		if (it == _database.end())
		{
			it = _database.lower_bound(date);
			if (it == _database.begin())
				std::cerr << "Error: Price not available\n"; //TODO throw error
			it--;
		}
		std::cout << date << " => " << value << " = " << (bitcoin_value * it->second) << std::endl;
	}
}

bool BitcoinExchange::isDateValid(std::string date)
{
	bool isLeap = false;
	int year = 0, month = 0, day = 0;
	std::istringstream ss(date);
	for(int i = 0; i < 3; i++)
	{
		std::string tmp;
		getline(ss, tmp, '-');
		int digit = to_double(tmp);
		std::cout << "digit: " << digit << std::endl;
		if (digit == -1)
			return false;
		if (i == 0)
		{
			year = digit;
			if (year % 400 == 0)
				isLeap = true;
			else if (year % 4 == 0 && year % 100 != 0)
				isLeap = true;
		}
		if (i == 1)
		{
			month = digit;
			if (month < 0 || month > 12)
				return (false);
		}
		if ( i == 2)
		{
			day = digit;
			if (day < 0 || day > 31)
				return (false);
			if ((month == 02) && \
					((isLeap == true && day > 29) ||
					(isLeap == false && day > 28)))
			{
				return (false);
			}
			if ((month == 9 || month == 04 || month == 6 || month == 11) && 
					day > 30)
			{
				return (false);
			}
		}
	}
	return true;
}

bool BitcoinExchange::isValueValid(double value, std::string Ovalue)
{
	if (to_string(value) != Ovalue)
		return (false);
	if (value < 0) {
		std::cerr << "Error: not a positive number" << std::endl;
		return (false);
	}
	if (value > 1000)
	{
		std::cerr << "Error: too large a number" << std::endl;
		return (false);
	}
	return (true);
}

bool BitcoinExchange::createDatabase(std::string path)
{
	std::ifstream file_database;
	std::string buffer;
	int line_nbr = 1;
	
	file_database.open(path.c_str());
	if (!file_database.is_open())
	{
		std::cerr << "Error: database not found." << std::endl;
		return (false);
	}
	
	getline(file_database, buffer);
	if(file_database.eof())
	{
		std::cerr <<  "Error: Empty database" << std::endl;
		
	}
	while(getline(file_database, buffer))
	{
		line_nbr++;
		std::string date, price;
		
		std::istringstream ss(buffer);
		
		getline(ss, date, ',');
		if (isDateValid(date) == false)
		{
			std::cerr << "Error:Invalid date in database: " << date << std::endl;
			std::cerr << "Line: " << line_nbr << std::endl;
			return (false);
		}
		getline(ss, price, ',');
		// double bitcoin_price = atof(price.c_str());
		double bitcoin_price =  to_double(price);
		// if (isPriceValid(bitcoin_price, price) == false)
		// {
		// 	std::cerr << "Error:Invalid price in database: " << price << std::endl;
		// 	std::cerr << "Line: " << line_nbr << std::endl;

		// 	std::cout << " price: " << bitcoin_price << " " << price << " " << price.c_str() << std::endl;
		// 	return (false);
		// }
		if (bitcoin_price == -1)
		{
			std::cerr << "Error:Invalid price in database: " << price << std::endl;
			std::cerr << "Line: " << line_nbr << std::endl;
			return (false);
		}
		//TODO check if price is valid
		
		_database.insert(std::pair<std::string, double> (date, bitcoin_price));
	}
	return (true);
}

bool BitcoinExchange::isPriceValid(double bitcoin_price, std::string price)
{
	if (price != to_string(bitcoin_price))
		return (false);
	return (true);
}

void BitcoinExchange::print_database(int nbr_of_lines)
{
	/* FOR DEBUGGING */
	std::map<std::string, double>::iterator it = _database.begin();
	
	for (int i = 0; i < nbr_of_lines; i++)
	{
		if (it == _database.end())
			break;
		double tmp = it->second + it->second;
		std::cout << it->first << ": " << std::fixed  << tmp << std::endl;
		it++;
	}
}

double    to_double(std::string str)
{
    double    x;
	int point = 0;
	
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == '.')
			point++;
		if ((isdigit(str[i]) == false && (str[i] != '.' && !isspace(str[i])))|| point > 1)
			return (-1);
	}
    std::istringstream ss(str);
    ss >> x;
    return x;
}

std::string BitcoinExchange::to_string(double num)
{
	std::stringstream ss;
	ss << num;
	std::string str = ss.str();
	return (str);
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange & src )
{
	*this = src;
}

BitcoinExchange &				BitcoinExchange::operator=( BitcoinExchange const & rhs )
{
	(void) rhs;
	if ( this != &rhs )
	{
		this->_input = rhs._input;
		this->_database = rhs._database;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}