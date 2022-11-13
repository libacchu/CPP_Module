/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:35:55 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/12 16:49:54 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void )
{
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "----- [TEST 1] -----" DEFAULT<< std::endl;
		DiamondTrap d1("d1");
		
		std::cout << B_GREEN "----- Info -----" DEFAULT<< std::endl;
		std::cout << "Name = " << d1.getName() << std::endl;
		std::cout << "Hit Points = " << d1.getHitPoints() << std::endl;
		std::cout << "Energy Points = " << d1.getEnergyPoints() << std::endl;
		std::cout << "Attack Damage = " << d1.getAttackdamage() << std::endl;
	
		std::cout << std::endl;
		d1.attack("boss");
		d1.takeDamage(30);
		d1.beRepaired(10);
		d1.highFivesGuys();
		d1.takeDamage(20);
		d1.beRepaired(10);
		d1.whoAmI();
		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "----- [TEST 2] -----" DEFAULT<< std::endl;
		ClapTrap c1("c1");
		
		std::cout << B_GREEN "----- Info -----" DEFAULT<< std::endl;
		std::cout << "Name = " << c1.getName() << std::endl;
		std::cout << "Hit Points = " << c1.getHitPoints() << std::endl;
		std::cout << "Energy Points = " << c1.getEnergyPoints() << std::endl;
		std::cout << "Attack Damage = " << c1.getAttackdamage() << std::endl;
	
		std::cout << std::endl;
		c1.attack("boss");
		c1.takeDamage(30);
		c1.beRepaired(10);
		// c1.guardGate();
		c1.takeDamage(20);
		c1.beRepaired(10);
		std::cout << std::endl;
	}
}