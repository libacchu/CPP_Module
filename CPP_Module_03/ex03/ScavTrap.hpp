/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:32:40 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/12 16:44:08 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		ScavTrap();
	public:
		ScavTrap( std::string init_name );
		ScavTrap( const ScavTrap& copy );
		ScavTrap& operator=( ScavTrap const & rhs );
		~ScavTrap();
		
		void guardGate( void );
};

// std::ostream & operator<<( std::ostream & o, ScavTrap const & rhs);

#endif
