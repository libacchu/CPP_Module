/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:23:26 by libacchu          #+#    #+#             */
/*   Updated: 2022/10/28 12:24:25 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iomanip>

Contacts::Contacts(void) {
	std::cout << "Constructor called\n";
	Contacts::_nbrInst++;
	return ;
}

Contacts::~Contacts(void) {
	std::cout << "deconstructor called\n";
	// Contacts::_nbrInst--;
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
	std::cout << "Enter first name: ";
	std::cin >> this->first_name;
}

void Contacts::set_last_name() {
	std::cout << "Enter last name: ";
	std::cin >> this->last_name;
}

void Contacts::set_nickname() {
	std::cout << "Enter nickname: ";
	std::cin >> this->nickname;
}

void Contacts::set_phone_nbr() {
	std::cout << "Enter phonenumber: ";
	std::cin >> this->phone_number;
}

void Contacts::set_darkest_secret() {
	std::cout << "what is you darkest secret: ";
	std::cin >> this->darkest_secret;
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

int	Contacts::get_phone_nbr() {
	return (this->phone_number);
}

std::string Contacts::get_darkest_secret() {
	return (this->darkest_secret);
}

int	Contacts::get_nbrInst() {
	return (Contacts::_nbrInst);
}

// void add(Contacts *contact)
// {
// 	contact[Contacts::nbr_of_contacts % 8].set_first_name();
// 	contact[Contacts::nbr_of_contacts % 8].set_last_name();
// 	contact[Contacts::nbr_of_contacts % 8].set_nickname();
// 	contact[Contacts::nbr_of_contacts % 8].set_phone_nbr();
// 	contact[Contacts::nbr_of_contacts % 8].set_darkest_secret();
// }
