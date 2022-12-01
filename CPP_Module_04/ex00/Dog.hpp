/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:26:25 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/30 10:46:28 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	private:

	public:
		Dog( void );
		Dog( const Dog& copy );
		Dog& operator=( const Dog& rhs);
		~Dog( void );

		const std::string&	getType( void ) const;
		
		void	makeSound( void ) const;
};

#endif
