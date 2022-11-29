/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:35:04 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/21 13:55:39 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ( void )
{
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "---------- TEST 1 ----------" DEFAULT << std::endl;
		
		Bureaucrat	John("John", 1);
		Form		City1("City1", 150, 150);
		
		try {
			City1.signForm(John);
			std::cout << John << std::endl;
			John.incrementGrade();
			std::cout << John << std::endl;
			John.decrementGrade();
			std::cout << John << std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "---------- TEST 2 ----------" DEFAULT << std::endl;
		
		Bureaucrat Matthew("Matthew", 150);
		
		try {
			std::cout << Matthew << std::endl;
			Matthew.incrementGrade();
			std::cout << Matthew << std::endl;
			Matthew.decrementGrade();
			std::cout << Matthew << std::endl;
			Matthew.decrementGrade();
			std::cout << Matthew << std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "---------- TEST 3 ----------" DEFAULT << std::endl;
		
		Bureaucrat Luke("Luke", 20);
		
		try {
			std::cout << Luke << std::endl;
			Luke.incrementGrade();
			std::cout << Luke << std::endl;
			Luke.incrementGrade();
			std::cout << Luke << std::endl;
			Luke.incrementGrade();
			std::cout << Luke << std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
