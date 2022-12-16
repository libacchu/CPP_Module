/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:35:04 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/16 12:59:21 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main ( void )
{
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "---------- TEST 1 ----------" DEFAULT << std::endl;
		
		
		try {
			Bureaucrat	John("John", 1);
			PresidentialPardonForm form1( "Godfather" );
			std::cout << form1 << std::endl;
			form1.signForm(John);
			form1.execute(John);
			std::cout << form1 << std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		
	}
	return (0);
}
