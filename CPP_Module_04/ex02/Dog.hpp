/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:26:25 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/17 14:02:43 by libacchu         ###   ########.fr       */
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
		std::string	type;
		Brain* dogBrain;
	public:
		Dog();
		Dog( std::string	init_type );
		Dog( const Dog& copy );
		Dog& operator=( const Dog& rhs);
		~Dog();

		const std::string&	getType() const;
		
		void	makeSound( void ) const;
};

#endif