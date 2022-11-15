/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:41:04 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/15 10:08:16 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << B_RED "WrongCat default constructor called." DEFAULT << std::endl;
}

WrongCat::WrongCat( std::string	init_type ) : type( init_type ) {
	std::cout << B_RED "WrongCat default parameter constructor called." DEFAULT << std::endl;
}

WrongCat::WrongCat( const WrongCat & copy ) : WrongAnimal() {
	std::cout << B_RED "WrongCat copy constructor called." DEFAULT << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator=( const WrongCat& rhs ) {
	std::cout << B_RED "WrongCat copy operator called." DEFAULT << std::endl;
	this->type = rhs.type;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << B_RED "WrongCat destructor called." DEFAULT << std::endl;
}

const std::string&	WrongCat::getType( void ) const {
	return (this->type);
}

void	WrongCat::makeSound( void ) const {
	std::cout << B_RED "WrongCat make a sound." DEFAULT << std::endl;
}