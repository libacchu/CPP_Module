/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:35:53 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/18 12:40:45 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {}

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
	return ( this->name );
}

int	Bureaucrat::getGrade( void ) const {
	return ( this->grade );
}

void	Bureaucrat::incrementGrade( void ) {
	this->grade--;
	if (this->grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

void	Bureaucrat::decrementGrade( void ) {
	this->grade++;
	if (this->grade > minGrade)
		throw (Bureaucrat::GradeTooLowException());	
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Exception: Grade too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Exception: Grade too Low");
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}