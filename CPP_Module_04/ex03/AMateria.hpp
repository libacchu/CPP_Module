/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:09:07 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/08 10:22:36 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

#define DEFAULT "\033[0;39m"
#define B_RED "\033[1;31m"
#define B_BLUE "\033[1;94m"
#define B_YELLOW "\033[1;33m"
#define B_GREEN "\033[1;32m"
#define B_PINK "\033[1;35m"

class AMateria
{
	protected:
		std::string type;
		AMateria( void );
	public:
		AMateria( std::string const & type );
		virtual ~AMateria( void ) {};
		
		std::string const &		getType( void ) const; //Returns the materia type
		virtual AMateria* 		clone( void ) const = 0;
		virtual void 			use( ICharacter& target ) = 0;
};

#endif
