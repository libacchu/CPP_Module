/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:44:06 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/07 18:08:33 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void )
: AForm("ShrubberyForm", 145, 137),  _target("_notarget_")
{
	std::cout << B_BLUE "ShrubberyCreationForm default constructor called." DEFAULT << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
: AForm("ShrubberyForm", 145, 137),  _target(target)
{
	std::cout << B_BLUE "ShrubberyCreationForm parameter constructor called." DEFAULT << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
: AForm(src.getName(), src.getGradeToSign(), src.getGradeToExecute()),
_target(src._target)
{
	std::cout << B_BLUE "ShrubberyCreationForm copy constructor called." DEFAULT << std::endl;
	*this = src;
}

ShrubberyCreationForm &		ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	(void) rhs;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << B_BLUE "ShrubberyCreationForm destructor called." DEFAULT << std::endl;
}

const std::string&	ShrubberyCreationForm::getTarget( void ) const
{
	return (this->_target);
}

bool	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	if (checkExecution( executor.getGrade(), this->getGradeToExecute(), this->getSignitureStatus() )) {
		throw ( AForm::CannotBeExecuted() );
	}
	ShrubberyCreationForm::printAsciiTree();
	return( true );
}

void ShrubberyCreationForm::printAsciiTree( void ) const
{
	std::string fileName = _target + "_shrubbery";
	std::ofstream file( fileName.c_str() );
	
	
	if (!file) {
		std::cout << B_RED "Creating file failed" DEFAULT << std::endl;
		return ;
	}
	file <<"          v                     v			" << std::endl; 
	file <<"         >X<                   >X<			" << std::endl;
	file <<"          A                     A			" << std::endl;
	file <<"         d$b                   d$b			" << std::endl;
	file <<"       .d/$$b.               .d/$$b.		" << std::endl;
	file <<"     .d$i$$/$$b.           .d$i$$/$$b.		" << std::endl;
	file <<"        d$$@b                 d$$@b			" << std::endl;
	file <<"       d/$$$ib               d/$$$ib		" << std::endl;
	file <<"     .d$$$/$$$b            .d$$$/$$$b		" << std::endl;
	file <<"   .d$$@$$$$/$$ib.       .d$$@$$$$/$$ib.	" << std::endl;
	file <<"       d$$i$$b               d$$i$$b		" << std::endl;
	file <<"      d/$$$$@$b             d/$$$$@$b		" << std::endl;
	file <<"   .d$@$$/$$$$$@b.       .d$@$$/$$$$$@b.	" << std::endl;
	file <<" .d$$$$i$$$/$$$$$$b.   .d$$$$i$$$/$$$$$$b.	" << std::endl;
	file <<"         ###                   ###			" << std::endl;
	file <<"         ###                   ###			" << std::endl;
	file <<"         ###                   ###			" << std::endl;

	file.close();
}
