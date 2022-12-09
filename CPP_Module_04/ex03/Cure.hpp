/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:17:19 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/08 10:22:44 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{
	private:
	
	public:
		Cure( void );
		Cure( const Cure& copy );
		Cure& operator=( const Cure& rhs );
		~Cure( void );

		virtual AMateria* 		clone( void ) const;
		virtual void 			use( ICharacter& target );
};

#endif
