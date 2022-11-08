/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:22:46 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/08 09:53:56 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl test;

	if (argc == 2)
		test.complain(argv[1]);
	else {
		std::cout << "Invalid input " << "try: ./harlFilter <LEVEL>" << std::endl;
		std::cout << "LEVELS: " << "[ DEBUG ] [ INFO ] [ WARNING ] [ ERROR ]"<< std::endl;
	}

	return(0);	
}