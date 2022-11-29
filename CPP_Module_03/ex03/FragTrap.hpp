/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:32:32 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/29 16:16:10 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		FragTrap();
	public:
		FragTrap( std::string init_name );
		FragTrap( const FragTrap& copy );
		FragTrap& operator=( FragTrap const & rhs );
		~FragTrap();
		
		void highFivesGuys( void );
};

#endif
