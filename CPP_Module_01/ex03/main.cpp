/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:09:03 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/02 17:18:12 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main (void)
{
	HumanA man1("john", "axe");	
	HumanB man2("paul");
	
	man1.attack();
	man2.attack();
	
	man2.setWeapon("water gun");

	man1.attack();
	man2.attack();
}
