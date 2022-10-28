/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:23:26 by libacchu          #+#    #+#             */
/*   Updated: 2022/10/28 12:18:33 by libacchu         ###   ########.fr       */
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
		std::cout << "Index: " <<contact[j].get_index() << std::endl;
		std::cout << "First: " <<contact[j].get_first_name() << std::endl;
		std::cout << "Last: " << contact[j].get_last_name() << std::endl;
		std::cout << "Nick: " << contact[j].get_nickname() << std::endl;
		std::cout << "Number: " << contact[j].get_phone_nbr() << std::endl;
		std::cout << "Secret: " <<contact[j].get_darkest_secret() << std::endl;
		std::cout << std::endl;
		j++;
	}
}
