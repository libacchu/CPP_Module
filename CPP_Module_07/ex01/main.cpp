/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:38:37 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/17 19:11:09 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main ()
{
	// int array[4] = { 1, 2, 3, 4};
	char array[5] = "abcd";
	// std::string array[5] = {"abcd", "ef", "kjhdsfg", "hello"};

	for (int i = 0; i < 4; i++) {
		std::cout << array[i] << " ";
	}
	
	std::cout << std::endl;
	iter(array, 4, &addOne);

	for (int i = 0; i < 4; i++) {
		std::cout << array[i] << " ";
	}
}
