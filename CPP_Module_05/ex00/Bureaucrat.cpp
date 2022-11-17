/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:35:53 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/17 16:26:55 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat( const Bureaucrat & copy ) {
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat & rhs ) {
	this->name = rhs.name;
	this->grade = rhs.grade;
	return(*this);
}

Bureaucrat::~Bureaucrat() {}

const std::string&	Bureaucrat::getName( void ) const {
	return( this->name );
}

int&	Bureaucrat::getGrade( void ) const {
	return ( this->grade );
}

void	Bureaucrat::setName( std::string name ) {
	this->name = name;
}

void	Bureaucrat::setGrade( int grade ) {
	this->grade = grade;
}