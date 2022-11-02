/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:09:52 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/02 16:29:21 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}
Weapon::~Weapon() {}

std::string	Weapon::getType() const{
	return (this->type);
}

void	Weapon::setType(std::string newType) {
	this->type = newType;
}