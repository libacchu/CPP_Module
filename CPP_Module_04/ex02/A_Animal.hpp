/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:02:27 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/07 10:16:31 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_ANIMAL_HPP
# define A_ANIMAL_HPP

#define DEFAULT "\033[0;39m"
#define B_RED "\033[1;31m"
#define B_BLUE "\033[1;94m"
#define B_YELLOW "\033[1;33m"
#define B_GREEN "\033[1;32m"
#define B_PINK "\033[1;35m"

#include <iostream>

class A_Animal
{
	protected:
		std::string	type;
	public:
		A_Animal( void );
		A_Animal( const A_Animal& copy );
		A_Animal& operator=( const A_Animal& rhs);
		virtual ~A_Animal( void );

		const std::string&	getType( void ) const;
		
		virtual void	makeSound( void ) const = 0;
};

#endif
