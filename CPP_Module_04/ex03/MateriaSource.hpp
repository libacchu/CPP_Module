/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:27:45 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/08 13:49:06 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE
# define MATERIASOURCE

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	materias[4];
		int			nbrOfMateria;
	public:
		MateriaSource( void );
		MateriaSource( const MateriaSource& copy );
		MateriaSource& operator=( const MateriaSource& rhs );
		~MateriaSource( void );

		virtual void		learnMateria( AMateria* m );
		virtual AMateria*	createMateria( std::string const & type );
};

#endif
