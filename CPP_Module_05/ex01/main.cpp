/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:35:04 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/12 13:50:09 by libacchu         ###   ########.fr       */
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
			City1.signForm(John);
			std::cout << City1 << std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "---------- TEST 2 ----------" DEFAULT << std::endl;
		
		Bureaucrat Matthew("Matthew", 151);
		Form		City2("City2", 4, 151);
		
		try {
			std::cout << City2 << std::endl;
			City2.signForm(Matthew);
			std::cout << City2 << std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "---------- TEST 3 ----------" DEFAULT << std::endl;
		
		Bureaucrat Luke("Luke", 20);
		Form		City3("City3", 20, 20);
		try {
			std::cout << City3 << std::endl;
			City3.signForm(Luke);
			std::cout << City3 << std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
