/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:58:14 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/15 11:25:39 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << B_GREEN "Dog default constructor called." DEFAULT << std::endl;
	this->dogBrain = new Brain();
}

Dog::Dog( std::string	init_type ) : type( init_type ) {
	std::cout << B_GREEN "Dog default parameter constructor called." DEFAULT << std::endl;
	this->dogBrain = new Brain();
}

//TODO: why the animal constructor
Dog::Dog( const Dog & copy ) : Animal() {
	std::cout << B_GREEN "Dog copy constructor called." DEFAULT << std::endl;
	this->dogBrain = new Brain();
	*this = copy;
	return ;
}

Dog& Dog::operator=( const Dog& rhs ) {
	std::cout << B_GREEN "Dog copy operator called." DEFAULT << std::endl;
	this->type = rhs.type;
	this->dogBrain = rhs.dogBrain;
	return (*this);
}

Dog::~Dog() {
	delete dogBrain;
	std::cout << B_GREEN "Dog destructor called." DEFAULT << std::endl;
}

const std::string&	Dog::getType( void ) const {
	return (this->type);
}

void	Dog::makeSound( void ) const {
	std::cout << B_GREEN "Dog make a sound." DEFAULT << std::endl;
}
