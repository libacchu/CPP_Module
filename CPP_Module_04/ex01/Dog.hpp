/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:26:25 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/06 16:16:10 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	dogBrain;
	public:
		Dog( void );
		Dog( const Dog& copy );
		Dog& operator=( const Dog& rhs );
		~Dog( void );

		const std::string&	getType( void ) const;
		Brain*				getBrain( void );
		void				setType ( std::string type );
		
		void	makeSound( void ) const;
};

#endif
