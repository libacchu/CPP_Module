/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:27:40 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/08 10:14:02 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) {
	//TODO
	
	std::cout << B_BLUE "Character default constructor called" DEFAULT << std::endl;
	this->name = "_noname_";
}

Character::Character( std::string const & name) {
	//TODO
	
	std::cout << B_BLUE "Character name constructor called" DEFAULT << std::endl;
	this->name = name;
}

Character::Character( const Character& copy ) {
	/*	During copy, the Materias of a Character must be
		deleted before the new ones are added
		to their inventory. Of course, the Materias must
		be deleted when a Character is destroyed.
	*/
	//TODO
	
	std::cout << B_BLUE "Character copy constructor called" DEFAULT << std::endl;
	*this = copy;
}

Character& Character::operator=( const Character& rhs ) {
	// TODO
	
	std::cout << B_BLUE "Character copy operator called" DEFAULT << std::endl;
	return (*this);
}

Character::~Character( void ) {
	std::cout << B_BLUE "Character destructor called" DEFAULT << std::endl;
}

std::string const & Character::getName( void ) const {
	return( this->name );
}

void Character::equip( AMateria* m ) {
	// TODO
	/*	In case they try to add a Materia to a full inventory,
		or use/unequip an unexisting Materia, don’t do anything
		(but still, bugs are forbidden).
	*/
	
}

void Character::unequip( int idx ) {
	// TODO
	/*	 The unequip() member function must NOT delete the Materia!
		Handle the Materias your character left on the floor as you like.
		Save the addresses before calling unequip(), or anything else, but
		don’t forget that you have to avoid memory leaks.
	*/
}

void Character::use( int idx, ICharacter& target ) {
	// TODO
	
	/*	In case they try to add a Materia to a full inventory,
		or use/unequip an unexisting Materia, don’t do anything
		(but still, bugs are forbidden).

		The use(int, ICharacter&) member function will have to use the Materia at the
		slot[idx], and pass the target parameter to the AMateria::use function
	*/
	
	if (idx >= 0 && idx < 4)
		inventory[idx]->use(target);
		
	//---->
}
