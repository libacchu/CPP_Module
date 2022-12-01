/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:41:04 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/30 11:21:02 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	std::cout << B_RED "WrongCat default constructor called." DEFAULT << std::endl;
	this->type = "WrongCat";
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

WrongCat::~WrongCat( void ) {
	std::cout << B_RED "WrongCat destructor called." DEFAULT << std::endl;
}

const std::string&	WrongCat::getType( void ) const {
	return (this->type);
}

void	WrongCat::makeSound( void ) const {
	std::cout << B_RED "WrongCat make a sound." DEFAULT << std::endl;
}
