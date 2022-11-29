/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:35:55 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/23 11:50:27 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	std::cout << std::endl;
	ClapTrap C1("C1");

	std::cout << std::endl;
	std::cout << B_YELLOW "----- Info -----" DEFAULT<< std::endl;
	std::cout << "Name = " << C1.getName() << std::endl;
	std::cout << "Hit Points = " << C1.getHitPoints() << std::endl;
	std::cout << "Energy Points = " << C1.getEnergyPoints() << std::endl;
	std::cout << "Attack Damage = " << C1.getAttackdamage() << std::endl;
	
	std::cout << std::endl;
	std::cout << B_BLUE "----- Attack -----" DEFAULT<< std::endl;
	C1.attack("The Boss");
	
	std::cout << std::endl;
	std::cout << B_RED "----- Take Damage -----" DEFAULT<< std::endl;
	C1.takeDamage(3);
	C1.takeDamage(5);
	C1.takeDamage(5);
	std::cout << "Name = " << C1.getName() << std::endl;
	std::cout << "Energy Points = " << C1.getEnergyPoints() << std::endl;
	
	std::cout << std::endl;
	std::cout << B_GREEN "----- Repair -----" DEFAULT<< std::endl;
	C1.beRepaired(10);
	C1.beRepaired(10);
	std::cout << "Name = " << C1.getName() << std::endl;
	std::cout << "Energy Points = " << C1.getEnergyPoints() << std::endl;

	std::cout << std::endl;
	std::cout << B_YELLOW "----- Info -----" DEFAULT<< std::endl;
	std::cout << "Name = " << C1.getName() << std::endl;
	std::cout << "Hit Points = " << C1.getHitPoints() << std::endl;
	std::cout << "Energy Points = " << C1.getEnergyPoints() << std::endl;
	std::cout << "Attack Damage = " << C1.getAttackdamage() << std::endl;
	std::cout << std::endl;
	
	return (0);
}
