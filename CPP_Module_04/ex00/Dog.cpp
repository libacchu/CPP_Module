/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:58:14 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/30 10:44:39 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << B_GREEN "Dog default constructor called." DEFAULT << std::endl;
	this->type = "Dog";
}

Dog::Dog( const Dog & copy ): Animal() {
	std::cout << B_GREEN "Dog copy constructor called." DEFAULT << std::endl;
	*this = copy;
}

Dog& Dog::operator=( const Dog& rhs ) {
	std::cout << B_GREEN "Dog copy operator called." DEFAULT << std::endl;
	this->type = rhs.type;
	return (*this);
}

Dog::~Dog( void ) {
	std::cout << B_GREEN "Dog destructor called." DEFAULT << std::endl;
}

const std::string&	Dog::getType( void ) const {
	return (this->type);
}

void	Dog::makeSound( void ) const {
	std::cout << B_GREEN "Dog make a sound." DEFAULT << std::endl;
}
