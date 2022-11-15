/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:11:07 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/15 10:01:19 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << B_YELLOW "Animal default constructor called." DEFAULT << std::endl;
}

Animal::Animal( std::string	init_type ) : type( init_type ) {
	std::cout << B_YELLOW "Animal default parameter constructor called." DEFAULT << std::endl;
}

Animal::Animal( const Animal & copy ) {
	std::cout << B_YELLOW "Animal copy constructor called." DEFAULT << std::endl;
	*this = copy;
}

Animal& Animal::operator=( const Animal& rhs ) {
	std::cout << B_YELLOW "Animal copy operator called." DEFAULT << std::endl;
	this->type = rhs.type;
	return (*this);
}

Animal::~Animal() {
	std::cout << B_YELLOW "Animal destructor called." DEFAULT << std::endl;
}

const std::string&	Animal::getType( void ) const {
	return (this->type);
}

void	Animal::makeSound( void ) const {
	std::cout << B_YELLOW "Animal make a sound." DEFAULT << std::endl;
}