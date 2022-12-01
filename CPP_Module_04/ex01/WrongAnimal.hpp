/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:36:05 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/30 11:23:34 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#define DEFAULT "\033[0;39m"
#define B_RED "\033[1;31m"
#define B_BLUE "\033[1;94m"
#define B_YELLOW "\033[1;33m"
#define B_GREEN "\033[1;32m"
#define B_PINK "\033[1;35m"

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal& copy );
		WrongAnimal& operator=( const WrongAnimal& rhs);
		~WrongAnimal( void );

		const std::string&	getType( void ) const;
		
		void	makeSound( void ) const;
};

#endif

