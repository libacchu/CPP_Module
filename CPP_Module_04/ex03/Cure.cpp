/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:43:43 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/07 12:45:49 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"

Cure::Cure( void ) {
	std::cout << B_GREEN "Cure default constructor called" DEFAULT << std::endl;
	this->type = "cure";
}

Cure::Cure( const Cure& copy) {
	std::cout << B_GREEN "Cure copy constructor called" DEFAULT << std::endl;
	*this = copy;
}

Cure& Cure::operator=( const Cure& rhs ) {
	std::cout << B_GREEN "Cure copy operator called" DEFAULT << std::endl;
	this->type = rhs.type;
	return (*this);
}

Cure::~Cure( void ) {
	std::cout << B_GREEN "Cure destructor called" DEFAULT << std::endl;
}

AMateria* 		Cure::clone( void ) const {
	Cure* tmp = new Cure(*this);
	return (tmp);
}

void 			Cure::use( ICharacter& target ) {
	std::cout << B_GREEN "* heals " << target.getName() \
		<< "’s wounds *" DEFAULT << std::endl;
}
