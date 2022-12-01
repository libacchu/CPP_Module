/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:02:20 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/17 14:02:22 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() {
	std::cout << B_PINK "Cat default constructor called." DEFAULT << std::endl;
	this->catBrain = new Brain();
}

Cat::Cat( std::string	init_type ) : type( init_type ) {
	std::cout << B_PINK "Cat default parameter constructor called." DEFAULT << std::endl;
	this->catBrain = new Brain();
}

Cat::Cat( const Cat & copy ) : A_Animal() {
	std::cout << B_PINK "Cat copy constructor called." DEFAULT << std::endl;
	this->catBrain = new Brain();
	*this = copy;
	return ;
}

Cat& Cat::operator=( const Cat& rhs ) {
	std::cout << B_PINK "Cat copy operator called." DEFAULT << std::endl;
	this->type = rhs.type;
	this->catBrain = rhs.catBrain;
	return (*this);
}

Cat::~Cat() {
	std::cout << B_PINK "Cat destructor called." DEFAULT << std::endl;
	delete catBrain;
}

const std::string&	Cat::getType( void ) const {
	return (this->type);
}

void	Cat::makeSound( void ) const {
	std::cout << B_PINK "Cat make a sound." DEFAULT << std::endl;
}