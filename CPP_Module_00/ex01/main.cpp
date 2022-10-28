/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:24:25 by libacchu          #+#    #+#             */
/*   Updated: 2022/10/27 23:16:37 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void intro_message()
{
	std::cout << std::endl;
	std::cout << B_RED "Welcome to your Phonebook!" DEFAULT << std::endl;
	std::cout <<  GREEN"What would you like to do?" DEFAULT << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	PhoneBook		book;
	std::string		input;
	
	intro_message();
	while(1)
	{
		std::cout <<  B_BLUE "Please Enter: ";
		std::cout <<  DEFAULT "ADD | SEARCH | EXIT" << std::endl;
		std::cout <<  DEFAULT "Input: ";
		std::cin >> input;
		if (input == "ADD")
			std::cout <<  "add function" << std::endl;
		else if (input == "SEARCH")
			std::cout <<  "search function" << std::endl;
		else if (input == "EXIT")
			break ;
		else
			std::cout <<  B_RED << input << ": is an invalid input!" DEFAULT << std::endl;
	}
	return (0);
}
