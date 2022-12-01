/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:24:57 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/30 15:12:59 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain( void );
		Brain(const Brain& copy);
		Brain& operator=(const Brain& rhs);
		~Brain( void );

		const std::string*		getIdeas( void ) const;
		void					setIdeas( std::string idea, int index);
};

#endif
