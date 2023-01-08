/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:35:53 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/07 16:05:58 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("_noname_"), _grade(_minGrade) {
	std::cout << B_GREEN "Bureaucrat default constructor called." DEFAULT << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade) {
	std::cout << B_GREEN "Bureaucrat parameter constructor called." DEFAULT << std::endl;
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (this->_grade > _minGrade)
		throw (Bureaucrat::GradeTooLowException());	
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