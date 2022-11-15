/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:32:25 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/12 16:11:46 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string init_name ): ClapTrap(init_name) {
	std::cout << B_RED "FragTrap default constructor called" DEFAULT << std::endl;
	this->name = init_name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->maxEneryPoints = 50;
	this->attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap& copy ): ClapTrap(copy.name) {
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
	std::cout << B_RED << this << " destructor called" DEFAULT << std::endl;
	return ;
}

void FragTrap::highFivesGuys(void) {
	std::cout << B_RED << this << " gives high fives to everyone" DEFAULT << std::endl;
	return ;
}
