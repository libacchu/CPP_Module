/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:23:26 by libacchu          #+#    #+#             */
/*   Updated: 2022/10/28 08:43:22 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iomanip>

void Contacts::set_first_name()
{
	std::cout << "Enter first name: ";
	std::cin >> this->first_name;
}

void Contacts::set_last_name()
{
	std::cout << "Enter last name: ";
	std::cin >> this->last_name;
}

void Contacts::set_nickname()
{
	std::cout << "Enter nickname: ";
	std::cin >> this->nickname;
}

void Contacts::set_phone_nbr()
{
	std::cout << "Enter phonenumber: ";
	std::cin >> this->phone_number;
}

void Contacts::set_darkest_secret()
{
	std::cout << "what is you darkest secret: ";
	std::cin >> this->darkest_secret;
}

std::string Contacts::get_first_name()
{
	return (this->first_name);
}

std::string Contacts::get_last_name()
{
	return (this->last_name);
}

std::string Contacts::get_nickname()
{
	return (this->nickname);
}

int	Contacts::get_phone_nbr()
{
	return (this->phone_number);
}

std::string Contacts::get_darkest_secret()
{
	return (this->darkest_secret);
}

// void add(Contacts *contact)
// {
// 	contact[Contacts::nbr_of_contacts % 8].set_first_name();
// 	contact[Contacts::nbr_of_contacts % 8].set_last_name();
// 	contact[Contacts::nbr_of_contacts % 8].set_nickname();
// 	contact[Contacts::nbr_of_contacts % 8].set_phone_nbr();
// 	contact[Contacts::nbr_of_contacts % 8].set_darkest_secret();
// }

void	PhoneBook::print_contact_table()
{
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
