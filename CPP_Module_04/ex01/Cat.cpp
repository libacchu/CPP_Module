/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:02:20 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/06 16:19:21 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << B_PINK "Cat default constructor called." DEFAULT << std::endl;
	this->type = "Cat";
}

Cat::Cat( const Cat & copy ): Animal() {
	std::cout << B_PINK "Cat copy constructor called." DEFAULT << std::endl;
	*this = copy;
}

Cat& Cat::operator=( const Cat& rhs ) {
	std::cout << B_PINK "Cat copy operator called." DEFAULT << std::endl;
	this->type = rhs.getType();
	this->catBrain = rhs.catBrain;
	return (*this);
}

Cat::~Cat( void ) {
	std::cout << B_PINK "Cat destructor called." DEFAULT << std::endl;
}

const std::string&	Cat::getType( void ) const {
	return (this->type);
}

Brain*		Cat::getBrain( void ) {
	return (&(this->catBrain));
}

void		Cat::setType ( std::string type ) {
	this->type = type;
}

void	Cat::makeSound( void ) const {
	std::cout << B_PINK "Cat make a sound." DEFAULT << std::endl;
}
