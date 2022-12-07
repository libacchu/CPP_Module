/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:24:57 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/06 15:06:19 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	private:
		std::string* ideas;
	public:
		Brain( void );
		Brain(const Brain& copy);
		Brain& operator=(const Brain& rhs);
		~Brain( void );

		const std::string*		getIdeas( void ) const;
		void					setIdeas( std::string idea, int index);
};

#endif
