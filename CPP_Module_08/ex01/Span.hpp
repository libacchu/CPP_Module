/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:05:26 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/13 10:00:17 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int> 	_array;
		// int*				_array;
		int				_elements; // may need a range of iterators
		Span( void );
	public:
		Span( int N );
		Span( const Span &copy );
		Span& operator=( const Span & rhs );
		~Span ( void );

		void addNumber( int num );
		int shortestSpan( void ) const;
		int longestSpan( void ) const;
};

#endif
