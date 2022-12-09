/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:01:26 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/08 10:23:01 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class IMateriaSource
{
	private:
	
	public:
		virtual ~IMateriaSource( void ) {}
		virtual void learnMateria( AMateria* ) = 0;
		virtual AMateria* createMateria( std::string const & type ) = 0;
};

#endif
