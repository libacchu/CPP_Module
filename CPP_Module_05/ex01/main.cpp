/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:35:04 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/07 17:28:17 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ( void )
{
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "---------- TEST 1 ----------" DEFAULT << std::endl;
		
		Bureaucrat	John("John", 4);
		Form		City1("City1", 151, 151);
		
		try {
			std::cout << City1 << std::endl;
			City1.beSigned(John);
			std::cout << City1 << std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "---------- TEST 2 ----------" DEFAULT << std::endl;
		
		Bureaucrat Matthew("Matthew", 4);
		Form		City2("City2", 4, 15);
		
		try {
			std::cout << City2 << std::endl;
			Matthew.signForm (City2);
			std::cout << City2 << std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "---------- TEST 3 ----------" DEFAULT << std::endl;
		
		Bureaucrat Luke("Luke", 23);
		Form		City3("City3", 20, 20);
		try {
			std::cout << City3 << std::endl;
			Luke.signForm(City3);
			std::cout << City3 << std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
