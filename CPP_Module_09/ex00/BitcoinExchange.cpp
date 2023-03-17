/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:01:18 by libacchu          #+#    #+#             */
/*   Updated: 2023/03/17 12:30:38 by libacchu         ###   ########.fr       */
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
		
		if (errorCheckLine(buffer) == false)
		{
			std::cerr << "Error:Invalid line in database: " << date << std::endl;
			std::cerr << "Line: " << buffer << std::endl;
			std::cerr << "Line: " << line_nbr << std::endl;
			return (false);
		}
		getline(ss, date, ',');
		date = ft_trim_white_space(date);
		if (isDateValid(date) == false)
		{
			std::cerr << "Error:Invalid date in database: " << date << std::endl;
			std::cerr << "Line: " << line_nbr << std::endl;
			return (false);
		}
		getline(ss, price, ',');
		price = ft_trim_white_space(price);
		double bitcoin_price =  to_double(price);
		if (bitcoin_price == -1 || price.find_first_not_of("0123456789.") != std::string::npos)
		{
			std::cerr << "Error:Invalid price in database: " << price << std::endl;
			std::cerr << "Line: " << line_nbr << std::endl;
			return (false);
		}
		_database.insert(std::pair<std::string, double> (date, bitcoin_price));
	}
	return (true);
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
		
		if (errorCheckLine(buffer) == false)
		{
			std::cerr << "Error: bad input => " << buffer << std::endl;
			buffer = "";
			continue;
		}
		getline(ss, date, '|');
		date = ft_trim_white_space(date);
		if (isDateValid(date) == false)
		{
			std::cerr << "Error: bad input => " << date << std::endl;
			date = "";
			continue;
		}
		getline(ss, value, '|');
		value = ft_trim_white_space(value);
		double bitcoin_value = to_double(value);
		if (bitcoin_value == -1)
		{
			std::cerr << "Error: bad input => " << value << std::endl;
			value = "";
			continue;
		}
		if (isValueValid(bitcoin_value, value) == false)
			continue;
		std::map<std::string, double>::iterator it = _database.begin(); it++;
		if (date < it->first)
		{
			std::cerr << "Error: Price not available: no data" << std::endl;
			continue;
		}
		it = _database.find(date);
		if (it == _database.end())
		{
			it = _database.lower_bound(date);
			if (it == _database.begin())
				std::cerr << "Error: Price not available\n"; 
			it--;
		}
		std::cout << date << " => " << value << " = " << std::setprecision(10) << (bitcoin_value * it->second) << std::endl;
	}
}

std::string ft_trim_white_space(std::string &str)
{
	size_t first = str.find_first_not_of(" \t\n\v\f\r");
	if (std::string::npos == first)
		return str;
	size_t last = str.find_last_not_of(" \t\n\v\f\r");
	return str.substr(first, (last - first + 1));
}

bool BitcoinExchange::isDateValid(std::string date)
{
	struct tm tm;
	bool isLeap = false;
	int year = 0, month = 0, day = 0;

	if (date.find_first_not_of("0123456789-") != std::string::npos)
		return (false);
	if (!strptime(date.c_str(), "%Y-%m-%d", &tm))
		return (false);
	std::istringstream ss(date);
	for(int i = 0; i < 3; i++)
	{
		std::string tmp;
		getline(ss, tmp, '-');
		int digit = to_double(tmp);
		if (digit == -1)
			return false;
		if (i == 0)
		{
			if (tmp.length() > 4 || tmp.length() < 4)
				return (false);
			year = digit;
			if (year % 400 == 0)
				isLeap = true;
			else if (year % 4 == 0 && year % 100 != 0)
				isLeap = true;
		}
		if (i == 1)
		{
			if (tmp.length() > 2 || tmp.length() < 2)
				return (false);
			month = digit;
			if (month < 0 || month > 12)
				return (false);
		}
		if ( i == 2)
		{
			if (tmp.length() > 2 || tmp.length() < 2)
				return (false);
			day = digit;
			if (day < 0 || day > 31)
				return (false);
			if ((month == 02) && \
					((isLeap == true && day > 29) || \
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
	if (Ovalue.find_first_not_of("0123456789.") != std::string::npos)
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
		if (isspace(str[i]) != 0)
			continue;
		if (str[i] == '.')
			point++;
		if (point > 1)
			return (-1);
		if (isdigit(str[i]) == 0 && str[i] != '.')
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

bool errorCheckLine(std::string &line)
{
	if (isMultiChar(line, '|') == false ||  isMultiChar(line, ',') == false)
		return (false);
	if (line.find_first_not_of("0123456789-,.| \n") != std::string::npos)
		return (false);
	return (true);
}

bool	isMultiChar(std::string &line, int c)
{
	size_t pos = line.find(c);
	
	if (line.find(c, pos + 1) != std::string::npos)
		return (false);
	return (true);
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