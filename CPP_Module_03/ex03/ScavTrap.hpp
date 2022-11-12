/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:32:40 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/11 13:45:30 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
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
