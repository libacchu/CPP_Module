/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:28:26 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/02 11:13:49 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	PhoneBook::add_contact_to_dir() {
	int index;
	
	index = contact->get_nbrInst() % 8;
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

void	header() {
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
}

void	PhoneBook::print_contact_table() {
	int j = 0;
	
	header();
	while (j < 8)
	{
		std::cout << std::right;
		std::cout << "|";
		std::cout << std::setw(10) << contact[j].get_index() << "|";
		if (contact[j].get_first_name().length() > 10)
			std::cout << std::setw(9) << contact[j].get_first_name().substr(0, 9) << '.' << "|";
		else
			std::cout << std::setw(10) << contact[j].get_first_name() << "|";
		if (contact[j].get_last_name().length() > 10)
			std::cout << std::setw(9) << contact[j].get_last_name().substr(0, 9) << '.' << "|";
		else
			std::cout << std::setw(10) << contact[j].get_last_name() << "|";
		if (contact[j].get_nickname().length() > 10)
			std::cout << std::setw(9) << contact[j].get_nickname().substr(0, 9) << '.' << "|";
		else
			std::cout << std::setw(10) << contact[j].get_nickname() << "|";
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
		if ( index >= 1 && index <= 8){
			if (this->contact[index - 1].get_first_name() == "EMPTY") {
				std::cout << B_RED  "Contact is empty\n" DEFAULT;
				
			}
			else {
				this->contact[index - 1].print_contacts();
				break ;
			}
		}
		else if (index == 999) {
			break ;
		}
		else {
			std::cout << B_RED  "Out of Range\n" DEFAULT;
		}
		std::cout << GREEN "Hint: Enter '999' to return." DEFAULT << std::endl;
	}
}
