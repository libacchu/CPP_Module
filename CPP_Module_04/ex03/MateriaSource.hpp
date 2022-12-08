/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:27:45 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/07 17:14:45 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE
# define MATERIASOURCE

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	materia[4];
	public:
		MateriaSource( void );
		MateriaSource( const MateriaSource& copy );
		MateriaSource& operator=( const MateriaSource& rhs );
		~MateriaSource( void );

		virtual void		learnMateria( AMateria* );
		virtual AMateria*	createMateria( std::string const & type );
		
};


#endif