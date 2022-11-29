/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:32:25 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/29 16:05:59 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("_noName_") {
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->maxEneryPoints = 50;
	this->attackDamage = 30;
	std::cout << B_RED "FragTrap " << this->name << " default constructor called" DEFAULT << std::endl;
}

FragTrap::FragTrap( std::string init_name ): ClapTrap(init_name) {
	this->name = init_name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->maxEneryPoints = 50;
	this->attackDamage = 30;
	std::cout << B_RED "FragTrap " << this->name << " default constructor called" DEFAULT << std::endl;
}

FragTrap::FragTrap( const FragTrap& copy ): ClapTrap() {
	std::cout << B_RED "FragTrap copy constructor called" DEFAULT << std::endl;
	*this = copy;
}

FragTrap& FragTrap::operator=( FragTrap const & rhs ) {
	std::cout << B_RED "FragTrap copy assignment operator called" DEFAULT << std::endl;
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << B_RED "FragTrap " << this->name << " destructor called" DEFAULT << std::endl;
	return ;
}

void FragTrap::highFivesGuys(void) {
	std::cout << B_RED "FragTrap " << this->name << " gives high fives to everyone" DEFAULT << std::endl;
	return ;
}
