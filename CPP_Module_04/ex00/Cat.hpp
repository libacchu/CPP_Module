/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:01:37 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/14 17:43:27 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	private:
		std::string	type;
	public:
		Cat();
		Cat( std::string	init_type );
		Cat( const Cat& copy );
		Cat& operator=( const Cat& rhs);
		~Cat();

		const std::string&	getType() const;
		
		void	makeSound( void ) const;
};

#endif
