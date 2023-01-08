/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:45:04 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/07 17:25:24 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void )
: _name("unnamed form"), _signitureStatus(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << B_BLUE "Form default constructor called." DEFAULT << std::endl;
}

Form::Form(const std::string name, int gradeToSign, int gradeToExecute)
: _name(name), _signitureStatus(false), _gradeToSign(gradeToSign), \
_gradeToExecute(gradeToExecute)
{
	std::cout << B_BLUE "Form parameter constructor called." DEFAULT << std::endl;
	if (checkGradeError( _gradeToSign ))
		new (this) Form(name, _minGrade, gradeToExecute);
	if (checkGradeError( _gradeToExecute ))
		new (this) Form(name, _gradeToSign, _minGrade);
}

Form::Form( const Form & copy): _name(copy._name + "_copy"), _signitureStatus(copy._signitureStatus), \
_gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
{
	std::cout << B_BLUE "Form copy constructor called." DEFAULT << std::endl;
}

Form& Form::operator=( const Form & rhs ) {
    std::cout << B_BLUE "Form copy operator called." DEFAULT << std::endl;
	/* _name, _gradeToSign, _gradeToExecute are constant and cannot be copied*/
	this->_signitureStatus = rhs._signitureStatus;
    return(*this);
}

Form::~Form( void ) {
	std::cout << B_BLUE "Form destructor called." DEFAULT << std::endl;
}

/* ------------ GETTERS ------------ */
const std::string&	Form::getName( void ) const {
	return ( this->_name );
}

const bool&	Form::getSignitureStatus( void ) const {
	return ( this->_signitureStatus );
}

const int&	Form::getGradeToSign( void ) const {
	return ( this->_gradeToSign );
}
const int&	Form::getGradeToExecute( void ) const {
	return ( this->_gradeToExecute );
}

/* ------------ METHODS ------------ */
bool	Form::beSigned( Bureaucrat &bureaucrat ) {

	if (bureaucrat.getGrade() <= this->_gradeToSign)
		this->_signitureStatus = true;
	return ( this->_signitureStatus );
}

bool Form::checkGradeError( int grade ) {
	try {
		if (grade < 1)
			throw (Form::GradeTooHighException());
		else if (grade > _minGrade)
			throw (Form::GradeTooLowException());	
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return (true);
	}
	return (false);
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("Exception: Grade too High");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Exception: Grade too Low");
}

std::ostream & operator<<( std::ostream & o, Form const & rhs) {
    o << "Form: " << rhs.getName() << " is ";
	if (rhs.getSignitureStatus() == true)
		o << B_BLUE "signed" DEFAULT;
	else
		o << B_RED "not signed" DEFAULT;
	o << ": the grade required to sign is " << rhs.getGradeToSign();
	o << ", the grade required to execute is " << rhs.getGradeToExecute();
	o << ".";
	return (o);
}
