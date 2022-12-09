/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:06:23 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/09 08:45:34 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	std::cout << B_BLUE "MateriaSource default constructor called" DEFAULT << std::endl;
	nbrOfMateria = 0;
	for (int i=0; i < 4; i++)
		this->materias[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource& copy ) {
	std::cout << B_BLUE "MateriaSource copy constructor called" DEFAULT << std::endl;
	*this = copy;
}

MateriaSource& MateriaSource::operator=( const MateriaSource& rhs ) {
	std::cout << B_BLUE "MateriaSource copy operator called" DEFAULT << std::endl;
	this->nbrOfMateria = rhs.nbrOfMateria;
		for (int i = 0; i < 4; i++) {
		if (this->materias[i])
			delete materias[i];
	}
	for (int i = 0; i < 4; i++) {
		this->materias[i] = rhs.materias[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource( void ) {
	std::cout << B_BLUE "MateriaSource destructor called" DEFAULT << std::endl;
}

void	MateriaSource::learnMateria( AMateria* m ) {
	// TODO
	/*	Copies the Materia passed as a parameter and store it in memory so it can be cloned
		later. Like the Character, the MateriaSource can know at most 4 Materias. They
		are not necessarily unique.
	*/
	if (nbrOfMateria == 4)
		return ;
	this->materias[nbrOfMateria] = m;
	nbrOfMateria++;
}

AMateria*	MateriaSource::createMateria( std::string const & type ) {
	// TODO
	/*	Returns a new Materia. The latter is a copy of the Materia previously learned by
		the MateriaSource whose type equals the one passed as parameter. Returns 0 if
		the type is unknown.
	*/
	for (int i = 3; i >= 0; i--) {
		if (materias[i] && materias[i]->getType() == type)
			return (materias[i]->clone());
	}
	return (NULL);
}
