/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:02:20 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/30 14:51:31 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << B_PINK "Cat default constructor called." DEFAULT << std::endl;
	this->type = "Cat";
	this->catBrain = new Brain();
}

Cat::Cat( const Cat & copy ) : Animal() {
	std::cout << B_PINK "Cat copy constructor called." DEFAULT << std::endl;
	*this = copy;
}

Cat& Cat::operator=( const Cat& rhs ) {
	std::cout << B_PINK "Cat copy operator called." DEFAULT << std::endl;
	this->type = rhs.type;
	this->catBrain = rhs.catBrain;
	return (*this);
}

Cat::~Cat( void ) {
	std::cout << B_PINK "Cat destructor called." DEFAULT << std::endl;
	delete this->catBrain;
}

const std::string&	Cat::getType( void ) const {
	return (this->type);
}

Brain*		Cat::getBrain( void ) {
	return (this->catBrain);
}


void	Cat::makeSound( void ) const {
	std::cout << B_PINK "Cat make a sound." DEFAULT << std::endl;
}
