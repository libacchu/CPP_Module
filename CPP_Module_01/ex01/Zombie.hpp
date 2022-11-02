/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:02:53 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/02 15:15:14 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

#define DEFAULT "\033[0;39m"
#define B_RED "\033[1;31m"
#define B_BLUE "\033[1;94m"
#define B_YELLOW "\033[1;33m"
#define GREEN "\033[32m"

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		Zombie( std::string	name );
		~Zombie();
		void announce( void );
		void set_name ( std::string	name );
		std::string get_name( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif