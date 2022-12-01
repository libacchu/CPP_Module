/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:01:37 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/30 14:51:34 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*	catBrain;
	public:
		Cat( void );
		Cat( const Cat& copy );
		Cat& operator=( const Cat& rhs);
		~Cat( void );

		const std::string&	getType( void ) const;
		Brain*				getBrain( void );
		
		void	makeSound( void ) const;
};

#endif
