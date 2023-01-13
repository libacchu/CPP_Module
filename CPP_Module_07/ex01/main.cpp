/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:38:37 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/09 08:52:24 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main ()
{
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "----- TEST 1 -----" DEFAULT << std::endl;
		
		int array[4] = { 1, 2, 3, 4};

		std::cout << B_PINK "Before:" DEFAULT << std::endl;
		for (int i = 0; i < 4; i++) {
			std::cout << array[i] << " ";
		}
		
		std::cout << std::endl;
		iter(array, 4, &addOne);

		std::cout << B_BLUE "After:" DEFAULT << std::endl;
		for (int i = 0; i < 4; i++) {
			std::cout << array[i] << " ";
		}

		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "----- TEST 2 -----" DEFAULT << std::endl;
		
		char array[5] = "abcd";

		std::cout << B_PINK "Before:" DEFAULT << std::endl;
		for (int i = 0; i < 4; i++) {
			std::cout << array[i] << " ";
		}
		
		std::cout << std::endl;
		iter(array, 4, &addOne);

		std::cout << B_BLUE "After:" DEFAULT << std::endl;
		for (int i = 0; i < 4; i++) {
			std::cout << array[i] << " ";
		}

		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "----- TEST 3 -----" DEFAULT << std::endl;
		
		double array[4] = {4.76, 7.25, 61, 94.64};

		std::cout << B_PINK "Before:" DEFAULT << std::endl;
		for (int i = 0; i < 4; i++) {
			std::cout << array[i] << " ";
		}
		
		std::cout << std::endl;
		iter(array, 4, &addOne);

		std::cout << B_BLUE "After:" DEFAULT << std::endl;
		for (int i = 0; i < 4; i++) {
			std::cout << array[i] << " ";
		}

		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "----- TEST 4 -----" DEFAULT << std::endl;
		
		Whatever one(1);
		Whatever two(2);
		Whatever three(3);
		Whatever four(4);
		Whatever array[4] = { one, two, three, four };

		std::cout << B_PINK "Before:" DEFAULT << std::endl;
		for (int i = 0; i < 4; i++) {
			std::cout << array[i] << " ";
		}
		
		std::cout << std::endl;
		iter(array, 4, &addOne);

		std::cout << B_BLUE "After:" DEFAULT << std::endl;
		for (int i = 0; i < 4; i++) {
			std::cout << array[i] << " ";
		}

		std::cout << std::endl;
	}
	return (0);
}
