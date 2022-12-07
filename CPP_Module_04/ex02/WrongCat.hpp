/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:43:13 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/30 11:19:57 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	public:
		WrongCat( void );
		WrongCat( const WrongCat& copy );
		WrongCat& operator=( const WrongCat& rhs);
		~WrongCat( void );

		const std::string&	getType() const;
		
		void	makeSound( void ) const;
};

#endif
