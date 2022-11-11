/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:19:17 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/11 11:12:57 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): hitPoints(10), energyPoints(10), attackDamage(0), maxEneryPoints(10) {}

ClapTrap::ClapTrap(std::string init_name)
: name(init_name), hitPoints(10), energyPoints(10), attackDamage(0), maxEneryPoints(10) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
	std::cout << "Copy constructor called" << std::endl;
	//TODO: needs operator= to function well
	*this = copy;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & rhs) {
	std::cout << "Copy assignment operator called"<< std::endl;
	//TODO: assign proper rhs.name() 
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Deconstructor called" << std::endl;
	return ;
}

void ClapTrap::attack( const std::string& target ) {
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " \
	<< this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	if (amount < this->energyPoints) {
		this->energyPoints -= amount;
		std::cout << "ClapTrap " << *this << " took " << amount << " damage!" << std::endl;
	}
	else {
		this->energyPoints = 0;
		std::cout << "ClapTrap " << *this << " is critically damage!" << std::endl;
	}
	// std::cout << *this << " has energyPoints " << this->energyPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if ((energyPoints + amount) > maxEneryPoints) {
		this->energyPoints = maxEneryPoints;
		std::cout << "ClapTrap " << *this << " is fully recovered." << std::endl;
	}
	else {
		energyPoints += amount;
		std::cout << "ClapTrap " << *this << " has recovered by " << amount << " points." << std::endl;
	}
}

/* ---------- Getters ---------- */

std::string		ClapTrap::getName( void ) const {
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

/* ---------- Setters ---------- */

// bool ClapTrap::setHitPoints( unsigned int amount ) {
	
// }

// bool ClapTrap::setEnergyPoints( unsigned int amount ) {
	
// }

// bool ClapTrap::setAttackdamage( unsigned int amount ) {
	
// }

/* ---------- Stream Operator ---------- */

std::ostream & operator<<( std::ostream & o,ClapTrap const & rhs) {
	o << rhs.getName();
	return (o);
}

