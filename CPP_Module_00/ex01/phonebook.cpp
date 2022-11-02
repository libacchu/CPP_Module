/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:23:26 by libacchu          #+#    #+#             */
/*   Updated: 2022/10/31 13:45:01 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	PhoneBook::add_contact_to_dir() {
	int index;
	
	index = contact->get_nbrInst() % 3;
	std::cout << index << std::endl;
	contact[index] = PhoneBook::add();
	return (0);
}

Contacts	PhoneBook::add() {
	Contacts cont;
	
	cont.set_index();
	cont.set_first_name();
	cont.set_last_name();
	cont.set_nickname();
	cont.set_phone_nbr();
	cont.set_darkest_secret();
	return (cont);
}


void	PhoneBook::print_contact_table() {
	for (int i = 0; i < 45; i++)
		std::cout << "-";
	std::cout << std::endl;
	std::cout << std::right;
	std::cout << "|";
	std::cout << std::setw(10) << "INDEX";
	std::cout << "|";
	std::cout << std::setw(10) << "FIRST NAME";
	std::cout << "|";
	std::cout << std::setw(10) << "LAST NAME";
	std::cout << "|";
	std::cout << std::setw(10) << "NICKNAME";
	std::cout << "|";
	std::cout << std::endl;
	for (int i = 0; i < 45; i++)
		std::cout << "-";
	std::cout << std::endl;
	int j = 0;
	while (j < 3)
	{
		std::cout << std::right;
		std::cout << "|";
		std::cout << std::setw(10) << contact[j].get_index();
		std::cout << "|";
		std::cout << std::setw(10) << contact[j].get_first_name().substr(0, 10);
		std::cout << "|";
		std::cout << std::setw(10) << contact[j].get_last_name().substr(0, 10);
		std::cout << "|";
		std::cout << std::setw(10) << contact[j].get_nickname().substr(0, 10);
		std::cout << "|";
		std::cout << std::endl;
		j++;
	}
	for (int i = 0; i < 45; i++)
		std::cout << "-";
	std::cout << std::endl;
}

void PhoneBook::display_contact() {
	int	index = -1;
	
	std::cin.clear();
	while (1)
	{
		while (std::cout << "Enter index: " && !(std::cin >> index)) {
			std::cin.clear();
			std::string line;
			std::getline(std::cin, line);
			std::cout << "'" B_RED << line << DEFAULT "' is not a number\n";
		}
		if ( index >= 1 && index <= 3){
			if (this->contact[index - 1].get_first_name() == "EMPTY") {
				std::cout << B_RED  "Contact is empty\n" DEFAULT;
			}
			else {
				this->contact[index - 1].print_contacts();
				break ;
			}
		}
		else {
			std::cout << B_RED  "Out of Range\n" DEFAULT;
		}
	}
	
}