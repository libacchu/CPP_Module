/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:43:13 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/14 20:46:49 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		std::string	type;
	public:
		WrongCat();
		WrongCat( std::string	init_type );
		WrongCat( const WrongCat& copy );
		WrongCat& operator=( const WrongCat& rhs);
		~WrongCat();

		const std::string&	getType() const;
		
		void	makeSound( void ) const;
};

#endif
