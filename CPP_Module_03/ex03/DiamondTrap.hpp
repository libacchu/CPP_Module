/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:58:26 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/12 16:57:18 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		DiamondTrap();
		std::string	name;
	public:
		DiamondTrap( std::string init_name );
		// DiamondTrap( const DiamondTrap & copy);
		DiamondTrap& operator=( DiamondTrap const & rhs );
		~DiamondTrap();
		
		void whoAmI() const;
};

#endif