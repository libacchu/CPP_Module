/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:01:27 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/02 15:08:15 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string	name ) {
	this->name = name;
}

Zombie::Zombie(){}

Zombie::~Zombie() {
	std::cout << B_RED << this->name << DEFAULT << ": Deconstructor called" << std::endl;
}

std::string Zombie::get_name( void ) {
	return (this->name);
}

void Zombie::set_name ( std::string	name ) {
	this->name = name;
}

void Zombie::announce( void ) {
	std::cout << B_BLUE << this->get_name() << DEFAULT << ": BraiiiiiiinnnzzzZ..." << std::endl;
}