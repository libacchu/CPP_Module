/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:35:04 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/03 15:25:58 by libacchu         ###   ########.fr       */
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

		Bureaucrat	Peter( "Peter", 160 );
		ShrubberyCreationForm form( "That Guy" );
		
		try {
			std::cout << std::endl;
			std::cout << form << std::endl;
			form.signForm( Peter );
			form.execute( Peter );
			std::cout << form << std::endl;
			std::cout << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
		{
		std::cout << std::endl;
		std::cout << B_YELLOW "---------- TEST 2 ----------" DEFAULT << std::endl;

		Bureaucrat	Paul( "Peter", 23 );
		RobotomyRequestForm form( "That Guy" );
		
		try {
			std::cout << std::endl;
			std::cout << form << std::endl;
			form.execute( Paul );
			form.signForm( Paul );
			form.execute( Paul );
			form.execute( Paul );
			form.execute( Paul );
			std::cout << form << std::endl;
			std::cout << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "---------- TEST 3 ----------" DEFAULT << std::endl;
		
		Bureaucrat	John( "John", 4 );
		PresidentialPardonForm form1( "Godfather" );
		
		try {
			std::cout << std::endl;
			std::cout << form1 << std::endl;
			form1.signForm( John );
			form1.execute( John );
			std::cout << form1 << std::endl;
			std::cout << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		
	}
	return (0);
}
