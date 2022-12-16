/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:30:29 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/13 16:16:39 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
: AForm("RobotomyRequestForm", 72, 45), _target("_notarget_")
{
	std::cout << B_BLUE "RobotomyRequestForm default constructor called." DEFAULT << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target )
: AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << B_BLUE "RobotomyRequestForm parameter constructor called." DEFAULT << std::endl;
} 

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
: AForm(src.getName(), src.getGradeToSign(), src.getGradeToExecute()),
_target(src._target)
{
	std::cout << B_BLUE "RobotomyRequestForm copy constructor called." DEFAULT << std::endl;
	*this = src;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	/* TODO */
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << B_BLUE "RobotomyRequestForm destructor called." DEFAULT << std::endl;
}

const std::string&	RobotomyRequestForm::getTarget( void ) const
{
	return (this->_target);
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	/* TODO */
	return o;
}
