/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:01:14 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/02 15:07:18 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	Zombie *mark;
	Zombie *john;
	Zombie *paul;

	std::cout << std::endl << B_YELLOW "--- Create Zombie ---" DEFAULT << std::endl;
	mark = newZombie("mark");
	randomChump("randChump1");
	john = newZombie("john");
	paul = newZombie("paul");
	
	std::cout << std::endl << B_YELLOW "--- Announced Zombie ---" DEFAULT << std::endl;
	mark->announce();
	john->announce();
	randomChump("randChump2");
	paul->announce();

	std::cout << std::endl << B_YELLOW "--- Destroy Zombie ---" DEFAULT << std::endl;
	delete mark;
	randomChump("randChump3");
	delete john;
	delete paul;
	return (0);
	
}