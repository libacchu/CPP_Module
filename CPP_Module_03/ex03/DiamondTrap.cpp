/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:58:22 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/12 16:55:11 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string init_name): name(init_name) {
    ClapTrap::name = init_name + "_clap_name";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->maxEneryPoints = ScavTrap::maxEneryPoints;
    this->attackDamage = FragTrap::attackDamage;
}

// DiamondTrap::DiamondTrap( const DiamondTrap& copy ): ClapTrap(copy.name) {
// 	std::cout << B_GREEN "DiamondTrap copy constructor called" DEFAULT << std::endl;
// 	*this = copy;
// }

DiamondTrap& DiamondTrap::operator=( DiamondTrap const & rhs ) {
	std::cout << B_GREEN "DiamondTrap copy assignment operator called" DEFAULT << std::endl;
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << B_GREEN << this << " destructor called" DEFAULT << std::endl;
	return ;
}

void DiamondTrap::whoAmI() const {
    std::cout << B_GREEN "I am " << this->name << ", my ClapTrap name is " << ClapTrap::name << std::endl;
}