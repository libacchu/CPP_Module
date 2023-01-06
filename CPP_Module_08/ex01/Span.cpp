/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:17:18 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/06 13:47:20 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ): _N(0) {}

Span::Span( int N ): _N(N) {
	
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

int		Span::shortestSpan( void ) const;
{
	
}

int		Span::longestSpan( void ) const;
{
	
}
