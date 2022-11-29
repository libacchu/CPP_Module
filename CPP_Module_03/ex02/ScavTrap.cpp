/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:31:30 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/29 15:53:54 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("_noName_") {
	std::cout << B_PINK "ScavTrap " << this->name << " default constructor called" DEFAULT << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->maxEneryPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap( std::string init_name ): ClapTrap(init_name) {
	std::cout << B_PINK "ScavTrap " << this->name << " default constructor called" DEFAULT << std::endl;
	this->name = init_name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->maxEneryPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap& copy ): ClapTrap() {
	std::cout << B_PINK "ScavTrap copy constructor called" DEFAULT << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator=( ScavTrap const & rhs ) {
	std::cout << B_PINK "ScavTrap copy assignment operator called" DEFAULT << std::endl;
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << B_PINK "ScavTrap " << this->name << " destructor called" DEFAULT << std::endl;
	return ;
}

void ScavTrap::guardGate( void ) {
	std::cout << B_PINK "ScavTrap " << this->name << " is now in Gate keeper mode." DEFAULT \
			<< std::endl;
}

void ScavTrap::attack( const std::string& target ) {
	std::cout << B_PINK "ScavTrap " << this->name << " attacks " << target << ", causing " \
	<< this->attackDamage << " points of damage!" DEFAULT << std::endl;
}
