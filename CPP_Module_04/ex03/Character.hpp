/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:21:32 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/08 07:42:53 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class  Character : public ICharacter
{
	private:
		std::string		name;
		AMateria* 		inventory[4];
		Character( void );
	public:
		Character( std::string const & name);
		Character( const Character& copy );
		Character& operator=( const Character& rhs );
		~Character( void );
		
		virtual std::string const &	getName( void ) const;
		virtual void 				equip( AMateria* m );
		virtual void 				unequip( int idx );
		virtual void 				use( int idx, ICharacter& target );
};

#endif