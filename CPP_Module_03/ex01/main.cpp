/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:35:55 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/12 10:27:35 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "----- [TEST 1] -----" DEFAULT<< std::endl;
		ScavTrap s1("s1");
		
		std::cout << B_GREEN "----- Info -----" DEFAULT<< std::endl;
		std::cout << "Name = " << s1.getName() << std::endl;
		std::cout << "Hit Points = " << s1.getHitPoints() << std::endl;
		std::cout << "Energy Points = " << s1.getEnergyPoints() << std::endl;
		std::cout << "Attack Damage = " << s1.getAttackdamage() << std::endl;
	
		std::cout << std::endl;
		s1.attack("boss");
		s1.takeDamage(30);
		s1.beRepaired(10);
		s1.guardGate();
		s1.takeDamage(20);
		s1.beRepaired(10);
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