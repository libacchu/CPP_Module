/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:05:45 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/05 10:50:31 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( void )
: _name("unnamed form"), _signitureStatus(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << B_BLUE "AForm default constructor called." DEFAULT << std::endl;
}

AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute)
: _name(name), _signitureStatus(false), _gradeToSign(gradeToSign), \
_gradeToExecute(gradeToExecute)
{
	std::cout << B_BLUE "AForm parameter constructor called." DEFAULT << std::endl;
}

AForm::AForm( const AForm & copy): _name(copy._name + "_copy"), _signitureStatus(copy._signitureStatus), \
_gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
{
	std::cout << B_BLUE "AForm copy constructor called." DEFAULT << std::endl;
}

AForm& AForm::operator=( const AForm & rhs ) {
    std::cout << B_BLUE "AForm copy operator called." DEFAULT << std::endl;
	/* _name, _gradeToSign, _gradeToExecute are constant and cannot be copied */
	this->_signitureStatus = rhs._signitureStatus;
    return(*this);
}

AForm::~AForm( void ) {
	std::cout << B_BLUE "AForm destructor called." DEFAULT << std::endl;
}

/* ------------ GETTERS ------------ */
const std::string&	AForm::getName( void ) const {
	return ( this->_name );
}

const bool&	AForm::getSignitureStatus( void ) const {
	return ( this->_signitureStatus );
}

const int&	AForm::getGradeToSign( void ) const {
	return ( this->_gradeToSign );
}
const int&	AForm::getGradeToExecute( void ) const {
	return ( this->_gradeToExecute );
}

/* ------------ METHODS ------------ */
bool	AForm::signForm( Bureaucrat &bureaucrat ) {

	if (bureaucrat.getGrade() <= this->_gradeToSign) {	
		this->_signitureStatus = true;
		std::cout << bureaucrat.getName() << B_BLUE << " signed " << DEFAULT <<this->getName() << std::endl;
	}
	else
		std::cout << bureaucrat.getName() << B_RED << " couldn't signed " << DEFAULT << this->getName() << std::endl;
	return ( this->_signitureStatus );
}

bool	AForm::execute( Bureaucrat const & executor ) const {
	if (checkExecution( executor.getGrade(), this->getGradeToExecute(), this->getSignitureStatus() )) {
		throw ( AForm::CannotBeExecuted() );
	}
	runExecute();
	return ( true );
}

bool AForm::checkGradeError( int grade, int check ) const {
	try {
		if (grade < 1)
			throw (AForm::GradeTooHighException());
		else if (grade > check)
			throw (AForm::GradeTooLowException());	
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return (true);
	}
	return (false);
}

bool AForm::checkExecution( int grade, int check, bool status ) const {
	if (grade < 1 || grade > check || status == false)
		return (true);
	return (false);
}

const char* AForm::GradeTooHighException::what() const throw() {
	return ("Exception: Grade too High");
}

const char* AForm::GradeTooLowException::what() const throw() {
	return ("Exception: Grade too Low");
}

const char* AForm::CannotBeExecuted::what() const throw() {
	return ("Exception: Form cannot be executed");
}

std::ostream & operator<<( std::ostream & o, AForm const & rhs) {
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
