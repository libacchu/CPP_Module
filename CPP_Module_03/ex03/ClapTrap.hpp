/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:07:33 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/11 12:47:35 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#define DEFAULT "\033[0;39m"
#define B_RED "\033[1;31m"
#define B_BLUE "\033[1;94m"
#define B_YELLOW "\033[1;33m"
#define B_GREEN "\033[1;32m"
#define B_PINK "\033[1;35m"

#include <iostream>

class ClapTrap
{
	protected:
		ClapTrap();
		std::string		name;
		unsigned int	hitPoints; //represent the health of the ClapTrap
		unsigned int	energyPoints;
		unsigned int	attackDamage;
		unsigned int	maxEneryPoints;	

	public:
		ClapTrap( std::string init_name );
		ClapTrap( const ClapTrap& copy );
		ClapTrap& operator=( ClapTrap const & rhs );
		~ClapTrap();
		
		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );

		/* ---------- Getters ---------- */
		const std::string&	getName( void ) const;
		unsigned int		getHitPoints( void ) const;
		unsigned int		getEnergyPoints( void ) const;
		unsigned int		getAttackdamage( void ) const;
};

std::ostream & operator<<( std::ostream & o, ClapTrap const & rhs);

#endif