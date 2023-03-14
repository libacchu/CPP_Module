/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:01:18 by libacchu          #+#    #+#             */
/*   Updated: 2023/03/14 21:26:56 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string input) : _input(input)
{
	std::ifstream file_input;
	
	file_input.open(input.c_str());
	if (!file_input.is_open())
	{
		throw "Error: could not open file.";
	}
	createDatabase("data.csv");
	
	readInput(file_input);
	
	file_input.close();
}

void BitcoinExchange::readInput(std::ifstream &file_input)
{
	std::string buffer;
	int line_nbr = 1;
	getline(file_input, buffer);

	while(getline(file_input, buffer))
	{
		// std::cout << "----- HERE ----- \n";
		line_nbr++;
		std::string date, value;
		
		std::istringstream ss(buffer);
		
		getline(ss, date, '|');
		// TODO
		// try
		// {
		// 	/* code */
		// 	isDateValid(date);
		// }
		// catch(const std::exception& e)
		// {
		// 	std::cerr << e.what() << '\n';
		// }
		// std::cout << "date = " << date << std::endl;
		getline(ss, value, '|');
		double bitcoin_value = atof(value.c_str());
		// std::cout << "value = " << bitcoin_value << std::endl;
		// TODO
		// try
		// {
		// 	/* code */
		// 	isValueValid(date);
		// }
		// catch(const std::exception& e)
		// {
		// 	std::cerr << e.what() << '\n';
		// }
		std::map<std::string, double>::iterator it = _database.find(date);
		if (it == _database.end())
		{
			it = _database.lower_bound(date);
			if (it == _database.begin())
				std::cerr << "Price not available\n"; //TODO throw error
		}
		std::cout << date << " => " << value << " = " << (bitcoin_value * it->second) << std::endl;
	}
}

bool BitcoinExchange::isDateValid(std::string date)
{
	(void) date;
	return true;
}

void BitcoinExchange::createDatabase(std::string path)
{
	std::ifstream file_database;
	std::string buffer;
	int line_nbr = 1;
	
	file_database.open(path.c_str());
	if (!file_database.is_open())
	{
		throw "Error: database not found.";
	}
	
	getline(file_database, buffer);
	
	while(getline(file_database, buffer))
	{
		line_nbr++;
		std::string date, price;
		
		std::istringstream ss(buffer);
		
		getline(ss, date, ',');
		//TODO check if date is valid
		getline(ss, price, ',');
		double bitcoin_price = atof(price.c_str()); //TODO use different function
		//TODO check if price is valid
		
		_database.insert(std::pair<std::string, double> (date, bitcoin_price));
	}
	// print_database(10);
}

void BitcoinExchange::print_database(int nbr_of_lines)
{
	std::map<std::string, double>::iterator it = _database.begin();
	
	for (int i = 0; i < nbr_of_lines; i++)
	{
		std::cout << it->first << ": " << it->second << std::endl;
		it++;
	}
}



BitcoinExchange::BitcoinExchange( const BitcoinExchange & src )
{
	(void) src;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange &				BitcoinExchange::operator=( BitcoinExchange const & rhs )
{
	(void) rhs;
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, BitcoinExchange const & i )
{
	(void) o;
	(void) i;
	//o << "Value = " << i.getValue();
	return o;
}
