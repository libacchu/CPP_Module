/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:09:52 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/08 13:15:48 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type) {}
Weapon::Weapon(){}
Weapon::~Weapon() {}

const std::string&	Weapon::getType() const{
	return (this->type);
}

void	Weapon::setType(std::string newType) {
	this->type = newType;
}