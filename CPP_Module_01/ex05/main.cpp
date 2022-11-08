/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:22:46 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/05 17:54:10 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( void)
{
	Harl test;

	std::cout << std::endl;
	std::cout << B_GREEN "DEBUG" DEFAULT << " level:" << std::endl;
	test.complain("DEBUG");
	std::cout << std::endl;
	
	std::cout << B_YELLOW "INFO" DEFAULT << " level:" << std::endl;
	test.complain("INFO");
	std::cout << std::endl;
	
	std::cout << B_PINK "WARNING" DEFAULT << " level:" << std::endl;
	test.complain("WARNING");
	std::cout << std::endl;
	
	std::cout << B_RED "ERROR" DEFAULT << " level:" << std::endl;
	test.complain("ERROR");
	std::cout << std::endl;

	return(0);	
}