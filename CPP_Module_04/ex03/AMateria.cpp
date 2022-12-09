/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:14:16 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/09 08:50:19 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) {
	std::cout << B_YELLOW "AMateria default constructor called" DEFAULT << std::endl;
	type = "_noname_";
}

AMateria::AMateria( std::string const & type ) {
	std::cout << B_YELLOW "AMateria string constructor called" DEFAULT << std::endl;
	this->type = type;
}

std::string const & AMateria::getType( void ) const {
	return ( this->type );
}
