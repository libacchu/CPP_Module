/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 09:22:28 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/15 12:39:24 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <iterator>
# include <stack>
# include <deque>
# include <queue>
# include <vector>
# include <list>

# define DEFAULT "\033[0;39m"
# define B_RED "\033[1;31m"
# define B_BLUE "\033[1;94m"
# define B_YELLOW "\033[1;33m"
# define B_GREEN "\033[1;32m"
# define B_PINK "\033[1;35m"

template< typename T >
class MutantStack : public std::stack<T>
{
	public:
		MutantStack( void ){}
		MutantStack( const MutantStack& copy ) { 
			*this = copy;
		}
		MutantStack operator=(const MutantStack& rhs) {
			std::stack<T>::operator=(rhs);
			return (*this);
		}
		virtual ~MutantStack(){}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin( void ) {
			return ( std::stack<T>::c.begin() );
		}
		iterator end( void ) {
			return ( std::stack<T>::c.end() );
		}
};

#endif
