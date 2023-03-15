/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:55:02 by libacchu          #+#    #+#             */
/*   Updated: 2023/03/15 14:15:59 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char** av)
{
	if (ac < 2)
	{
		std::cerr << "Error: Missing filename" << std::endl;
		return (1);
	}
	PmergeMe obj(av[1]);
	
	return (0);
}
