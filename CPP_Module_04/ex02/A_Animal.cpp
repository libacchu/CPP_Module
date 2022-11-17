/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:11:07 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/17 14:02:04 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"

A_Animal::A_Animal() {
	std::cout << B_YELLOW "A_Animal default constructor called." DEFAULT << std::endl;
}

A_Animal::A_Animal( std::string	init_type ) : type( init_type ) {
	std::cout << B_YELLOW "A_Animal default parameter constructor called." DEFAULT << std::endl;
}

A_Animal::A_Animal( const A_Animal & copy ) {
	std::cout << B_YELLOW "A_Animal copy constructor called." DEFAULT << std::endl;
	*this = copy;
}

A_Animal& A_Animal::operator=( const A_Animal& rhs ) {
	std::cout << B_YELLOW "A_Animal copy operator called." DEFAULT << std::endl;
	this->type = rhs.type;
	return (*this);
}

A_Animal::~A_Animal() {
	std::cout << B_YELLOW "A_Animal destructor called." DEFAULT << std::endl;
}

const std::string&	A_Animal::getType( void ) const {
	return (this->type);
}

void	A_Animal::makeSound( void ) const {
	std::cout << B_YELLOW "A_Animal make a sound." DEFAULT << std::endl;
}