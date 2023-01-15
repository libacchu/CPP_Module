/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:47:25 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/15 09:18:29 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void )
{
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "----- TEST 1-----" DEFAULT << std::endl;
		
		std::vector<int> v;
		v.push_back(10);
		v.push_back(30);
		v.push_back(40);
		v.push_back(20);
		try
		{
			std::vector<int>::iterator it = easyfind(v, 40);
			std::cout << B_BLUE "Element found: " DEFAULT << *it << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "----- TEST 2-----" DEFAULT << std::endl;
		
		std::vector<int> v;
		v.push_back(10);
		v.push_back(30);
		v.push_back(40);
		v.push_back(20);
		try
		{
			std::vector<int>::iterator it = easyfind(v, 80);
			std::cout << B_BLUE "Element found: " DEFAULT << *it << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
