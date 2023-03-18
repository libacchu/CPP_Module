/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:04:13 by libacchu          #+#    #+#             */
/*   Updated: 2023/03/17 12:22:03 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>
# include <fstream>
# include <sstream>
# include <cstdlib>

class BitcoinExchange
{
	private:
		std::string _input;
		std::string _database_start_date;
		std::string _database_end_date;
		std::map<std::string, double> _database; // Map container

		void print_database(int nbr_of_lines);

public:
        BitcoinExchange();
        BitcoinExchange(const std::string& _input);
		BitcoinExchange( BitcoinExchange const & src );
		~BitcoinExchange();

		bool createDatabase(const std::string& path);
		void readInput(std::ifstream &file_input);
		static bool isDateValid(const std::string& date);
		static bool isValueValid(double value, const std::string& Ovalue);
		
		static std::string to_string(double num);
		
		BitcoinExchange &		operator=( BitcoinExchange const & rhs );

    static bool isLeapYear(int year);
};

bool		isMultiChar(std::string &line, char c);
bool		errorCheckLine(std::string &line);
double    	to_double(std::string str);
std::string ft_trim_white_space(std::string &str);

#endif