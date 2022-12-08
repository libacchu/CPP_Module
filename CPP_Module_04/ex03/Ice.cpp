/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:13:52 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/07 18:11:05 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) {
	std::cout << B_BLUE "Ice default constructor called" DEFAULT << std::endl;
	this->type = "ice";
}

Ice::Ice( const Ice& copy) {
	std::cout << B_BLUE "Ice copy constructor called" DEFAULT << std::endl;
	*this = copy;
}

Ice& Ice::operator=( const Ice& rhs ) {
	std::cout << B_BLUE "Ice copy operator called" DEFAULT << std::endl;
	this->type = rhs.type;
	return (*this);
}

Ice::~Ice( void ) {
	std::cout << B_BLUE "Ice destructor called" DEFAULT << std::endl;
}

AMateria* 		Ice::clone( void ) const {
	Ice* tmp = new Ice(*this);
	return (tmp);
}

void 	Ice::use( ICharacter& target ) {
	std::cout << B_BLUE "* shoots an ice bolt at " << target.getName() \ 
		<< " *" DEFAULT << std::endl;
}
