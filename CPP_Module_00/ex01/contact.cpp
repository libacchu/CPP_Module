/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:23:26 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/02 11:10:20 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iomanip>

int Contacts::_nbrInst = 0;
int	Contacts::_nbrOfContacts = 8;

Contacts::Contacts(void) {
	this->first_name = "EMPTY";
	Contacts::_nbrInst++;
	this->set_index();
	return ;
}

Contacts::~Contacts(void) {
	return ;
}

void Contacts::set_index() {
	if (_nbrInst % _nbrOfContacts == 0)
		this->index = _nbrOfContacts;
	else
		this->index = _nbrInst % _nbrOfContacts;
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
	while (std::cout << "Enter phonenumber: " && !(std::cin >> this->phone_number))
		std::cin.clear();
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

std::string	Contacts::get_phone_nbr() {
	return (this->phone_number);
}

std::string Contacts::get_darkest_secret() {
	return (this->darkest_secret);
}

int	Contacts::get_nbrInst() {
	return (Contacts::_nbrInst);
}

int	Contacts::get_nbrOfContacts() {
	return (Contacts::_nbrOfContacts);
}



void Contacts::print_contacts() {
	std::cout << "First Name: " <<this->get_first_name() << std::endl;
	std::cout << "Last Name: " << this->get_last_name() << std::endl;
	std::cout << "Nickname: " <<this->get_nickname() << std::endl;
	std::cout << "Phone number: " <<this->get_phone_nbr() << std::endl;
	std::cout << "Darkest Secret: " <<this->get_darkest_secret() << std::endl;
}
