/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:11:10 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/02 18:26:06 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string	name, Weapon& Weapon)
: name{name}, HmanWeapon{Weapon} {
}

HumanA::~HumanA() {}

void HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->HmanWeapon.getType();
	std::cout << std::endl;
}