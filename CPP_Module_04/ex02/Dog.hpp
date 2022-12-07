/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:26:25 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/07 10:19:09 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "A_Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal
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
