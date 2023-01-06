/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:05:26 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/06 13:43:00 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>

class Span
{
	private:
		unsigned int	_N;
		int*			_array
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
