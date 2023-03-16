/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:04:13 by libacchu          #+#    #+#             */
/*   Updated: 2023/03/16 15:31:17 by libacchu         ###   ########.fr       */
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
		BitcoinExchange(std::string _input);
		BitcoinExchange( BitcoinExchange const & src );
		~BitcoinExchange();

		bool createDatabase(std::string path);
		void readInput(std::ifstream &file_input);
		bool isDateValid(std::string date);
		bool isValueValid(double value, std::string Ovalue);
		bool isPriceValid(double value, std::string price);
		
		std::string to_string(double num);
		
		BitcoinExchange &		operator=( BitcoinExchange const & rhs );
};

double    to_double(std::string str);

#endif