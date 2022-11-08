/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:24:25 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/04 15:41:53 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void intro_message() {
	std::cout << std::endl;
	std::cout << B_RED "Welcome to your Phonebook!" DEFAULT << std::endl;
	std::cout <<  GREEN"What would you like to do?" DEFAULT << std::endl;
	std::cout << std::endl;
}

int	main(void) {
	PhoneBook		book;
	std::string		input;
	
	intro_message();
	while((std::cout << B_BLUE "Please Enter: " << DEFAULT "ADD | SEARCH | EXIT" << \
		std::endl << "Input: " && getline(std::cin, input)))
	{
		if (input == "ADD") {
			book.add_contact_to_dir();
		}
		else if (input == "SEARCH"){
			book.print_contact_table();
			book.display_contact();
		}
		else if (input == "EXIT")
			break ;
		else
			std::cout <<  B_RED << input << ": is an invalid input!" DEFAULT << std::endl;
	}
	if (std::cin.eof()) {
		std::cout << std::endl;
		return (1) ;
	}
	
	return (0);
}
