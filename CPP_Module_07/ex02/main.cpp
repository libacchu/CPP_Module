/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 19:57:21 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/10 09:59:48 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <stdlib.h>
#include "Array.hpp"

#define MAX_VAL 750
int main()
{
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "----- TEST 1 -----" DEFAULT << std::endl;

		Array<std::string>	s;
		Array<int>			i;
		Array<char>			c;
		Array<double>		d;
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "----- TEST 2 -----" DEFAULT << std::endl;
		
		Array<std::string> names(4);
		
		names[0] = "John";
		names[1] = "Mary";
		names[2] = "Tom";
		names[3] = "Amy";
		
		try
		{			
			for (int i = 0; i <= 4; i++)
			{
				std::cout << names[i] << std::endl;
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		
		Array<std::string> copy = names; // Equal operator
		try
		{			
			for (int i = 0; i <= 4; i++)
			{
				std::cout << copy[i] << std::endl;
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{	
		std::cout << std::endl;
		std::cout << B_YELLOW "----- TEST main.cpp -----" DEFAULT << std::endl;
		
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;
	}
	return 0;
}
