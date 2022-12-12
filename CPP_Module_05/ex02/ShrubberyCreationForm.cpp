/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:44:06 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/12 16:39:28 by libacchu         ###   ########.fr       */
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
	if ( this != &rhs )
	{
		AForm::operator=(rhs);
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << B_BLUE "ShrubberyCreationForm destructor called." DEFAULT << std::endl;
}

const std::string&	ShrubberyCreationForm::getTarget( void ) const
{
	return (this->_target);
}

virtual void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}
