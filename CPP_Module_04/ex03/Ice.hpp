/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:15:00 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/08 10:22:49 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
	private:
	
	public:
		Ice( void );
		Ice( const Ice& copy );
		Ice& operator=( const Ice& rhs );
		~Ice( void );

		virtual AMateria* 		clone( void ) const;
		virtual void 			use( ICharacter& target );
};

#endif
