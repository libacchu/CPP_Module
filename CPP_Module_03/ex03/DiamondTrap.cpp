/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:58:22 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/29 19:40:43 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() { }

DiamondTrap::DiamondTrap(std::string init_name) {
    ClapTrap::name = init_name + "_clap_name";
	this->name = init_name;
	this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->maxEneryPoints = ScavTrap::maxEneryPoints;
    this->attackDamage = FragTrap::attackDamage;
	std::cout << B_GREEN "DiamondTrap " << this->name << " constructor called" DEFAULT << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& copy ): ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << B_GREEN "DiamondTrap copy constructor called" DEFAULT << std::endl;
	*this = copy;
}

DiamondTrap& DiamondTrap::operator=( DiamondTrap const & rhs ) {
	std::cout << B_GREEN "DiamondTrap copy assignment operator called" DEFAULT << std::endl;
	this->ClapTrap::name = rhs.ClapTrap::name;
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << B_GREEN "DiamondTrap " << this->name << " destructor called" DEFAULT << std::endl;
	return ;
}

void DiamondTrap::whoAmI() const {
    std::cout << B_GREEN "I am " << this->name << ", my ClapTrap name is " << ClapTrap::name << std::endl;
}
