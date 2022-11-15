/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:26:25 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/14 15:16:04 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	private:
		std::string	type;
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