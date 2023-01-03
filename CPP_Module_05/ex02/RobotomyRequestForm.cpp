/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:30:29 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/03 15:36:50 by libacchu         ###   ########.fr       */
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
	(void) rhs;
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

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	static int i;

	if (checkExecution( executor.getGrade(), this->getGradeToExecute(), this->getSignitureStatus() ))
		throw ( AForm::CannotBeExecuted() );
	if (i % 2)
		std::cout << "Informs that " << this->getTarget() << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Informs that the robotomy failed." << std::endl;
	i++;
}
