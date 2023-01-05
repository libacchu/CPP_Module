/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:35:04 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/05 08:31:11 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main ( void )
{
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "---------- TEST 1 ----------" DEFAULT << std::endl;

		Bureaucrat	Peter( "Peter", 5 );
		ShrubberyCreationForm form( "That Guy" );
		
		try {
			std::cout << std::endl;
			std::cout << form << std::endl;

			form.signForm( Peter );
			Peter.executeForm( form );
			
			std::cout << form << std::endl;
			std::cout << std::endl;
		}
		catch (std::exception &e) {
			std::cout << B_RED << e.what() << DEFAULT << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "---------- TEST 2 ----------" DEFAULT << std::endl;

		Bureaucrat	Paul( "Paul", 45 );
		RobotomyRequestForm form( "James" );
		
		try {
			std::cout << std::endl;
			std::cout << form << std::endl;
			
			Paul.executeForm( form );
			form.signForm( Paul );
			Paul.executeForm( form );
			form.execute( Paul );
			form.execute( Paul );
			form.execute( Paul );

			std::cout << form << std::endl;
			std::cout << std::endl;
		}
		catch (std::exception &e) {
			std::cout << B_RED << e.what() << DEFAULT << std::endl;
		}
	}
		{
		std::cout << std::endl;
		std::cout << B_YELLOW "---------- TEST 2.1 ----------" DEFAULT << std::endl;

		Bureaucrat	Linda( "Linda", 50 );
		RobotomyRequestForm form( "Robert" );
		
		try {
			std::cout << std::endl;
			std::cout << form << std::endl;
			
			form.signForm( Linda );
			Linda.executeForm( form );

			std::cout << form << std::endl;
			std::cout << std::endl;
		}
		catch (std::exception &e) {
			std::cout << B_RED << e.what() << DEFAULT << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "---------- TEST 3 ----------" DEFAULT << std::endl;
		
		Bureaucrat	John( "John", 4 );
		PresidentialPardonForm form( "Godfather" );
		
		try {
			std::cout << std::endl;
			std::cout << form << std::endl;
			
			form.signForm( John );
			John.executeForm( form );

			std::cout << form << std::endl;
			std::cout << std::endl;
		}
		catch (std::exception &e) {
			std::cout << B_RED << e.what() << DEFAULT << std::endl;
		}
	}
		{
		std::cout << std::endl;
		std::cout << B_YELLOW "---------- TEST 3.1 ----------" DEFAULT << std::endl;
		
		Bureaucrat	William( "William", 26 );
		PresidentialPardonForm form( "David" );
		
		try {
			std::cout << std::endl;
			std::cout << form << std::endl;
			
			form.signForm( William );
			William.executeForm( form );

			std::cout << form << std::endl;
			std::cout << std::endl;
		}
		catch (std::exception &e) {
			std::cout << B_RED << e.what() << DEFAULT << std::endl;
		}
	}
	return (0);
}
