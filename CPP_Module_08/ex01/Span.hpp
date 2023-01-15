/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:05:26 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/15 08:07:30 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# define DEFAULT "\033[0;39m"
# define B_RED "\033[1;31m"
# define B_BLUE "\033[1;94m"
# define B_YELLOW "\033[1;33m"
# define B_GREEN "\033[1;32m"
# define B_PINK "\033[1;35m"

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <iterator>
# include <exception>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int> 	_array;
		Span( void );
	public:
		Span& operator=( const Span & rhs );
		Span( const Span &copy );
		Span( int N );
		~Span ( void );

		void addNumber( int num );
		int shortestSpan( void ) const;
		int longestSpan( void ) const;
		
		void print( void ) const;
};

#endif
