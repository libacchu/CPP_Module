/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:19:17 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/29 15:54:36 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("_noname_"), hitPoints(10), energyPoints(10), attackDamage(0), maxEneryPoints(10) {
	std::cout << B_BLUE "ClapTrap " << this->name << " default constructor called" DEFAULT << std::endl;
}

ClapTrap::ClapTrap(std::string init_name)
: name(init_name), hitPoints(10), energyPoints(10), attackDamage(0), maxEneryPoints(10) {
	std::cout << B_BLUE "ClapTrap " << this->name << " default constructor called" DEFAULT << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
	std::cout << B_BLUE "ClapTrap copy constructor called" DEFAULT << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & rhs) {
	std::cout << B_BLUE " ClapTrap copy assignment operator called" DEFAULT << std::endl;
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << B_BLUE "ClapTrap " << this->name << " destructor called" DEFAULT << std::endl;
	return ;
}

void ClapTrap::attack( const std::string& target ) {
	std::cout << B_BLUE "ClapTrap " << this->name << " attacks " << target << ", causing " \
	<< this->attackDamage << " points of damage!" DEFAULT << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	if (amount < this->energyPoints) {
		this->energyPoints -= amount;
		std::cout << B_BLUE "ClapTrap " << *this << " took " << amount << " damage!" DEFAULT << std::endl;
	}
	else {
		this->energyPoints = 0;
		std::cout << B_BLUE "ClapTrap " << *this << " is critically damage!" DEFAULT << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if ((energyPoints + amount) > maxEneryPoints) {
		this->energyPoints = maxEneryPoints;
		std::cout << B_BLUE "ClapTrap " << *this << " is fully recovered." DEFAULT << std::endl;
	}
	else {
		energyPoints += amount;
		std::cout << B_BLUE "ClapTrap " << *this << " has recovered by " << amount << " points." DEFAULT << std::endl;
	}
}

/* ---------- Getters ---------- */

const std::string&		ClapTrap::getName( void ) const {
	return (this->name);
}

unsigned int	ClapTrap::getHitPoints( void ) const {
	return (this->hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints( void ) const {
	return (this->energyPoints);
}

unsigned int	ClapTrap::getAttackdamage( void ) const {
	return (this->attackDamage);
}

/* ---------- Stream Operator ---------- */

std::ostream & operator<<( std::ostream & o, ClapTrap const & rhs) {
	o << rhs.getName();
	return (o);
}
