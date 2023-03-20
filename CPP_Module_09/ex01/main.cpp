/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:55:02 by libacchu          #+#    #+#             */
/*   Updated: 2023/03/20 09:10:24 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char** av)
{
	if (ac < 2)
	{
		std::cerr << "Error: Missing argument" << std::endl;
		return (1);
	}
	if (ac > 2)
	{
		std::cerr << "Error: Too many arguments" << std::endl;
		return (2);
	}
	RPN obj(av[1]);
	
	return (0);
}