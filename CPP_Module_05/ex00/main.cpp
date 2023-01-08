/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:35:04 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/07 15:58:39 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ( void )
{
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "---------- TEST 1 ----------" DEFAULT << std::endl;
		
		try {
			Bureaucrat John("John", 1);

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
		
		try {
			Bureaucrat Matthew("Matthew", 150);
			
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
		
		
		try {
			Bureaucrat Luke("Luke", 20);
			
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
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "---------- TEST 4 ----------" DEFAULT << std::endl;
		
		try {
			Bureaucrat Tom("Tom", 0);
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		try {
			Bureaucrat Mark("Mark", 151);
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
