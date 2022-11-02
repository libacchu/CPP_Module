/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:23:26 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/02 09:23:41 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iomanip>

Contacts::Contacts(void) {
	this->phone_number = 0;
	this->first_name = "EMPTY";
	Contacts::_nbrInst++;
	this->set_index();
	return ;
}

Contacts::~Contacts(void) {
	return ;
}

int Contacts::_nbrInst = 0;

void Contacts::set_index() {
	if (_nbrInst % 3 == 0)
		this->index = 3;
	else
		this->index = _nbrInst % 3;
}

void Contacts::set_first_name() {
	std::cin.clear();
	while (std::cout << "Enter first name: " && !(std::cin >> this->first_name))
		std::cin.clear();
}

void Contacts::set_last_name() {
	std::cin.clear();
	while (std::cout << "Enter last name: " && !(std::cin >> this->last_name))
		std::cin.clear();
}

void Contacts::set_nickname() {
	std::cin.clear();
	while (std::cout << "Enter nickname: " && !(std::cin >> this->nickname))
		std::cin.clear();
}

void Contacts::set_phone_nbr() {
	
	std::cin.clear();
	while (std::cout << "Enter phonenumber: " && !(std::cin >> this->phone_number)) {
		std::cin.clear();
		std::string line;
        std::getline(std::cin, line);
        std::cout << "'" B_RED << line << DEFAULT "' is not a number\n";
	}
	
}

void Contacts::set_darkest_secret() {
	std::cin.clear();
	while (std::cout << "what is you darkest secret: " && !(std::cin >> this->darkest_secret))
		std::cin.clear();
}

int	Contacts::get_index() {
	return (this->index);
}

std::string Contacts::get_first_name() {
	return (this->first_name);
}

std::string Contacts::get_last_name() {
	return (this->last_name);
}

std::string Contacts::get_nickname() {
	return (this->nickname);
}

long	Contacts::get_phone_nbr() {
	return (this->phone_number);
}

std::string Contacts::get_darkest_secret() {
	return (this->darkest_secret);
}

int	Contacts::get_nbrInst() {
	return (Contacts::_nbrInst);
}

void Contacts::print_contacts() {
	std::cout << "First Name: " <<this->get_first_name() << std::endl;
	std::cout << "Last Name: " << this->get_last_name() << std::endl;
	std::cout << "Nickname: " <<this->get_nickname() << std::endl;
	std::cout << "Phone number: " <<this->get_phone_nbr() << std::endl;
	std::cout << "Darkest Secret: " <<this->get_darkest_secret() << std::endl;
}

// void add(Contacts *contact)
// {
// 	contact[Contacts::nbr_of_contacts % 8].set_first_name();
// 	contact[Contacts::nbr_of_contacts % 8].set_last_name();
// 	contact[Contacts::nbr_of_contacts % 8].set_nickname();
// 	contact[Contacts::nbr_of_contacts % 8].set_phone_nbr();
// 	contact[Contacts::nbr_of_contacts % 8].set_darkest_secret();
// }
