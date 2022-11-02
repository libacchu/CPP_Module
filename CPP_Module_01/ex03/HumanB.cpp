/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:11:16 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/02 18:35:51 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string	name): name{name}, HmanWeapon(NULL){}
HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& WeaponType) {
	this->HmanWeapon = &WeaponType;
}

void HumanB::attack() {
	if (!this->HmanWeapon)
		std::cout << this->name << " does not have a weapon!";
	else
		std::cout << this->name << " attacks with their " << this->HmanWeapon->getType();
	std::cout << std::endl;
}