/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:59:13 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/30 11:25:49 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << B_BLUE "WrongAnimal default constructor called." DEFAULT << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal & copy ) {
	std::cout << B_BLUE "WrongAnimal copy constructor called." DEFAULT << std::endl;
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& rhs ) {
	std::cout << B_BLUE "WrongAnimal copy operator called." DEFAULT << std::endl;
	this->type = rhs.type;
	return (*this);
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << B_BLUE "WrongAnimal destructor called." DEFAULT << std::endl;
}

const std::string&	WrongAnimal::getType( void ) const {
	return (this->type);
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << B_BLUE "WrongAnimal make a sound." DEFAULT << std::endl;
}
