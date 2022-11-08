/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:48:06 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/07 12:56:03 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << std::endl;
	std::cout << "The memory address of the string variable = " << &string << std::endl;
	std::cout << "The memory address held by stringPTR = " << &stringPTR << std::endl;
	std::cout << "The memory address held by stringREF = " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string variable = " << string << std::endl;
	std::cout << "The value pointed to by stringPTR = " << stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF = " << stringREF << std::endl;
	std::cout << std::endl;
	
}