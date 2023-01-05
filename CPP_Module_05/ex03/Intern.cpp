/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 08:44:34 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/05 11:42:20 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {
	std::cout << B_PINK "Intern default constructor called." DEFAULT << std::endl;
}

Intern::Intern( const Intern & copy ) {
	std::cout << B_PINK "Intern copy constructor called." DEFAULT << std::endl;
	*this = copy;
}

Intern &	Intern::operator=( Intern const & rhs ) {
	(void) rhs;
	return ( *this );
}

Intern::~Intern() {
	std::cout << B_PINK "Intern destructor called." DEFAULT << std::endl;
}

AForm*	Intern::makeForm( std::string formName, std::string target )
{
	AForm *form;
	int formIndex = 0;
	std::string listOfForms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	
	for ( ; formIndex < 3; formIndex++)
	{
		if (listOfForms[formIndex] == formName)
			break;
	}

	switch (formIndex)
	{
	case 0 :
		form = new PresidentialPardonForm( target );
		break;
	case 1 :
		form = new RobotomyRequestForm( target );
		break;
	case 2 :
		form = new ShrubberyCreationForm( target );
		break;
	
	default:
		throw ( "Intern cannot create \"" + formName + "\"");
	}
	std::cout << "Intern creates " << formName << std::endl;
	return (form);
}
