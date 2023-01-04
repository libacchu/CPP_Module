/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:45:34 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/04 14:50:38 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )
: AForm("PresidentialPardonForm", 25, 5), _target("_notarget_")
{
	std::cout << B_BLUE "PresidentialPardonForm default constructor called." DEFAULT << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string	target )
: AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << B_BLUE "PresidentialPardonForm parameter constructor called." DEFAULT << std::endl;
} 

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
: AForm(src.getName(), src.getGradeToSign(), src.getGradeToExecute()),
_target(src._target)
{
	std::cout << B_BLUE "PresidentialPardonForm copy constructor called." DEFAULT << std::endl;
	*this = src;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	(void) rhs;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << B_BLUE "PresidentialPardonForm destructor called." DEFAULT << std::endl;
}

const std::string&	PresidentialPardonForm::getTarget( void ) const
{
	return (this->_target);
}

void	PresidentialPardonForm::runExecute( void ) const
{
	std::cout << "Informs that " << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
