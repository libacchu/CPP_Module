/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:11:16 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/02 17:16:22 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string	name): name{name} {}
HumanB::~HumanB() {}

void HumanB::setWeapon(std::string WeaponType) {
	this->HmanWeapon.setType(WeaponType);
}

void HumanB::attack() {
	if (this->HmanWeapon.getType().length() == 0)
		std::cout << this->name << " does not have a weapon!";
	else
		std::cout << this->name << " attacks with their " << this->HmanWeapon.getType();
	std::cout << std::endl;
}