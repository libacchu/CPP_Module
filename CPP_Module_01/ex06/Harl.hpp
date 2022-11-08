/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:22:49 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/07 18:38:40 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

#define DEFAULT "\033[0;39m"
#define B_RED "\033[1;31m"
#define B_BLUE "\033[1;94m"
#define B_YELLOW "\033[1;33m"
#define B_GREEN "\033[1;32m"
#define B_PINK "\033[1;35m"
#define B_GREY "\033[1;30m"

class Harl
{
	private:
		void 	debug( void );
		void 	info( void );
		void 	warning( void );
		void 	error( void );
		void 	defaultCall( void );
	public:
		Harl();
		~Harl();
		void complain( std::string level );
};

#endif