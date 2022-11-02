/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:01:14 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/02 15:45:20 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	int		num;
	Zombie	*virus;

	num = 10;
	std::cout << std::endl << B_YELLOW "--- Create Zombie ---" DEFAULT << std::endl;
	virus = zombieHorde(num, "Corona");
	
	std::cout << std::endl << B_YELLOW "--- Announced Zombie ---" DEFAULT << std::endl;
	for (int i = 0; i < num; i++) {
		virus[i].announce();
	}
	
	std::cout << std::endl << B_YELLOW "--- Destroy Zombie ---" DEFAULT << std::endl;
	delete [] virus;
	
	return (0);
}