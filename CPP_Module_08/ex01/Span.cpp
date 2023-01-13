/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:17:18 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/13 08:26:26 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ): _N(0) {}

Span::Span( int N ): _N(N), _elements(0)
{
	
}

Span::Span( const Span &copy )
{
	*this = copy;
}

Span& Span::operator=( const Span & rhs )
{
	(void) rhs;
	return ( *this );
}

Span::~Span( void ) {}

void	Span::addNumber( int num )
{
	
}

int		Span::shortestSpan( void ) const
{
	if (_N <= 1)
		throw (""); // no span can be found
}

int		Span::longestSpan( void ) const
{
	if (_N <= 1)
		throw (""); // no span can be found
}
