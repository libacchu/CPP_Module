/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:55:02 by libacchu          #+#    #+#             */
/*   Updated: 2023/03/20 09:10:02 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char** av)
{
	if (ac < 2)
	{
		std::cerr << "Error: Missing arguments" << std::endl;
		return (1);
	}
	PmergeMe obj(ac, av);
	
	return (0);
}
