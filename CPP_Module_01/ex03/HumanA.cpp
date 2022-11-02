/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:11:10 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/02 17:11:15 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string	name, std::string Weapon)
: name{name} {
	this->HmanWeapon.setType(Weapon);
}

HumanA::~HumanA() {}

void HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->HmanWeapon.getType();
	std::cout << std::endl;
}