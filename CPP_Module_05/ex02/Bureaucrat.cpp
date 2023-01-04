/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:35:53 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/04 14:37:51 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("unnamed form"), _grade(150) {
	std::cout << B_GREEN "Bureaucrat default constructor called." DEFAULT << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade) {
	std::cout << B_GREEN "Bureaucrat parameter constructor called." DEFAULT << std::endl;
		if (checkGradeError( grade ))
			new (this) Bureaucrat(name, _minGrade);
}

Bureaucrat::Bureaucrat( const Bureaucrat & copy ) : _name(copy.getName() + "_copy") {
	std::cout << B_GREEN "Bureaucrat copy constructor called." DEFAULT << std::endl;
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat & rhs ) {
	/* _name is constant and cannot be copied */
	std::cout << B_GREEN "Bureaucrat copy operator called." DEFAULT << std::endl;
	this->_grade = rhs.getGrade();
	return(*this);
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << B_GREEN "Bureaucrat destructor called." DEFAULT << std::endl;
}

const std::string&	Bureaucrat::getName( void ) const {
	return ( this->_name );
}

int	Bureaucrat::getGrade( void ) const {
	return ( this->_grade );
}

void	Bureaucrat::incrementGrade( void ) {
	this->_grade--;
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

void	Bureaucrat::decrementGrade( void ) {
	this->_grade++;
	if (this->_grade > _minGrade)
		throw (Bureaucrat::GradeTooLowException());	
}

bool	Bureaucrat::checkGradeError( int grade ) {
	try {
		if (grade < 1)
			throw (Bureaucrat::GradeTooHighException());
		else if (grade > _minGrade)
			throw (Bureaucrat::GradeTooLowException());	
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return (true);
	}
	return (false);
}

void	Bureaucrat::executeForm( AForm const & form ) {
	try {
		if ( form.execute( *this ) )
			std::cout << this->getName() << B_BLUE " executed " DEFAULT << form.getName() << std::endl;
	}
	catch (...) {
		std::cout << this->getName() << B_RED " cannot execute " DEFAULT << form.getName() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Exception: Grade too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Exception: Grade too Low");
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs ) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}
