/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:45:04 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/21 13:50:36 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("unnamed form"),  gradeToSign(150), gradeToExecute(150), signitureStatus(false) {}

Form::Form(const std::string name, int gradeToSign, int gradeToExecute)
: name(name), gradeToSign(gradeToExecute), gradeToExecute(gradeToExecute) {
	this->signitureStatus = false;
}

Form::Form( const Form & copy)
: name(copy.name), gradeToSign(copy.gradeToSign), gradeToExecute(copy.gradeToExecute), signitureStatus(copy.signitureStatus) {}

Form& Form::operator=( const Form & rhs ) {
    this->signitureStatus = rhs.signitureStatus;
    return(*this);
}

Form::~Form() {}

/* ------------ GETTERS ------------ */
const std::string&	Form::getName( void ) const {
	return ( this->name );
}

const bool&	Form::getSignitureStatus( void ) const {
	return ( this->signitureStatus );
}

const int	Form::getGradeToSign( void ) const {
	return ( this->gradeToSign );
}
const int	Form::getGradeToExecute( void ) const {
	return ( this->gradeToExecute );
}

/* ------------ METHODS ------------ */
bool	Form::signForm( Bureaucrat &bureaucrat ) {
	if (bureaucrat.getGrade() <= this->gradeToSign)
		this->signitureStatus = true;
	else if (bureaucrat.getGrade() > this->gradeToSign)
		throw Bureaucrat::GradeTooLowException();
	return ( this->signitureStatus );
}


std::ostream & operator<<( std::ostream & o, Form const & rhs) {
    o << "Form: " << rhs.getName();
	return (o);
}