/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:02:27 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/14 17:38:42 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#define DEFAULT "\033[0;39m"
#define B_RED "\033[1;31m"
#define B_BLUE "\033[1;94m"
#define B_YELLOW "\033[1;33m"
#define B_GREEN "\033[1;32m"
#define B_PINK "\033[1;35m"

#include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal( std::string	init_type );
		Animal( const Animal& copy );
		Animal& operator=( const Animal& rhs);
		virtual ~Animal();

		const std::string&	getType( void ) const;
		
		virtual void	makeSound( void ) const;
};

#endif
