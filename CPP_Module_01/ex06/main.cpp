/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:22:46 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/07 18:48:21 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl test;

	if (argc == 2)
		test.complain(argv[1]);
	else
		std::cout << "Invalid input " << "try: ./harlFilter <LEVEL>" << std::endl;

	return(0);	
}