/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:35:04 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/07 18:22:51 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main ( void )
{
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "---------- TEST 1 ----------" DEFAULT << std::endl;

		Bureaucrat	Peter( "Peter", 5 );
		Intern someRandomIntern;
		AForm* rrf;
		
		try {
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			std::cout << std::endl;
			std::cout << *rrf << std::endl;

			Peter.signForm(*rrf);
			Peter.executeForm( *rrf );
			
			std::cout << *rrf << std::endl;
			std::cout << std::endl;
		}
		catch (std::exception &e) {
			std::cout << B_RED << e.what() << DEFAULT << std::endl;
		}
		catch (std::string err) {
			std::cout << B_RED << err << DEFAULT << std::endl;
			rrf = NULL;
		}
		if (rrf)
			delete rrf;
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "---------- TEST 2 ----------" DEFAULT << std::endl;

		Bureaucrat	Peter( "Peter", 5 );
		Intern someRandomIntern;
		AForm* rrf;
		
		try {
			rrf = someRandomIntern.makeForm("presidential pardon", "Bender");

			std::cout << std::endl;
			std::cout << *rrf << std::endl;

			rrf->beSigned( Peter );
			Peter.executeForm( *rrf );
			
			std::cout << *rrf << std::endl;
			std::cout << std::endl;
		}
		catch (std::exception &e) {
			std::cout << B_RED << e.what() << DEFAULT << std::endl;
		}
		catch (std::string err) {
			std::cout << B_RED << err << DEFAULT << std::endl;
			rrf = NULL;
		}
		if (rrf)
			delete rrf;
	}
		{
		std::cout << std::endl;
		std::cout << B_YELLOW "---------- TEST 3 ----------" DEFAULT << std::endl;

		Bureaucrat	Peter( "Peter", 5 );
		Intern someRandomIntern;
		AForm* rrf;
		
		try {
			rrf = someRandomIntern.makeForm("pardon", "Bender");

			std::cout << std::endl;
			std::cout << *rrf << std::endl;

			rrf->beSigned( Peter );
			Peter.executeForm( *rrf );
			
			std::cout << *rrf << std::endl;
			std::cout << std::endl;
		}
		catch (std::exception &e) {
			std::cout << B_RED << e.what() << DEFAULT << std::endl;
		}
		catch (std::string err) {
			std::cout << B_RED << err << DEFAULT << std::endl;
			rrf = NULL;
		}
		if (rrf)
			delete rrf;
	}
	return (0);
}
