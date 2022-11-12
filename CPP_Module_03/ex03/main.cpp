/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:35:55 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/12 10:47:43 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "----- [TEST 1] -----" DEFAULT<< std::endl;
		FragTrap f1("f1");
		
		std::cout << B_GREEN "----- Info -----" DEFAULT<< std::endl;
		std::cout << "Name = " << f1.getName() << std::endl;
		std::cout << "Hit Points = " << f1.getHitPoints() << std::endl;
		std::cout << "Energy Points = " << f1.getEnergyPoints() << std::endl;
		std::cout << "Attack Damage = " << f1.getAttackdamage() << std::endl;
	
		std::cout << std::endl;
		f1.attack("boss");
		f1.takeDamage(30);
		f1.beRepaired(10);
		f1.highFivesGuys();
		f1.takeDamage(20);
		f1.beRepaired(10);
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