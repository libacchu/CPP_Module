/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:17:18 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/15 08:57:08 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ): _N(0)
{}

Span::Span( int N ): _N(N)
{}

Span::Span( const Span &copy )
{
	this->_N = copy._N;
	_array = copy._array;
}

Span& Span::operator=( const Span & rhs )
{
	this->_N = rhs._N;
	_array = rhs._array;
	return ( *this );
}

Span::~Span( void ) {}

void	Span::addNumber( int num )
{
	if(_array.size() < _N)
		_array.push_back(num);
	else
		throw (std::out_of_range("Span is full") ); // Exception: Span too full
}

int		Span::shortestSpan( void ) const
{
	if (_array.size() <= 1)
		throw (std::out_of_range("No span can be found") ); // no span can be found
		
	std::vector<int> tmp = this->_array;
	std::sort(tmp.begin(), tmp.end());
	
	std::vector<int>::iterator it = tmp.begin();
	std::vector<int>::iterator end = tmp.end();
	
	for (it = tmp.begin() ; it != end; it++)
		end = std::remove(it + 1, end, *it);
	tmp.erase(end, tmp.end());
		
	int shortest = *(tmp.begin() + 1) - *tmp.begin();
	if (tmp.size() == 2)
		return (shortest);
		
	for (it = tmp.begin() + 1; it != tmp.end(); it++)
	{
		if((*it - *(it - 1)) < shortest)
			shortest = *it - *(it - 1);
	}
	return (shortest);
}

int		Span::longestSpan( void ) const
{
	if (_array.size() <= 1)
		throw (std::out_of_range("No span can be found") ); // no span can be found
	std::vector<int> tmp(this->_array);

	std::sort(tmp.begin(), tmp.end());
	return (*(tmp.end() - 1) - *tmp.begin());
}

void Span::print( void ) const
{
	std::vector<int>::const_iterator i = _array.begin();
	for ( ; i !=_array.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
}
