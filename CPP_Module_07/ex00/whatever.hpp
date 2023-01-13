/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:14:11 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/09 08:32:33 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

# define DEFAULT "\033[0;39m"
# define B_RED "\033[1;31m"
# define B_BLUE "\033[1;94m"
# define B_YELLOW "\033[1;33m"
# define B_GREEN "\033[1;32m"
# define B_PINK "\033[1;35m"

template< typename T >
T const&	max( T const& x, T const& y ) {
	return ( (x > y) ? x : y );
}

template< typename T >
T const&	min( T const& x, T const& y ) {
	return ( (x < y) ? x : y );
}

template< typename T >
void	swap( T& x, T& y ) {
	T tmp = x;
	x = y;
	y = tmp;
}

/*
class Whatever {
	public:
		Whatever( int n ) : _n( n ) {}
		bool operator==( Whatever const & rhs ) const { return (this->_n == rhs._n); }
		bool operator!=( Whatever const & rhs ) const { return (this->_n != rhs._n); }
		bool operator>( Whatever const & rhs ) const { return (this->_n > rhs._n); }
		bool operator<( Whatever const & rhs ) const { return (this->_n < rhs._n); }
		bool operator>=( Whatever const & rhs ) const { return (this->_n >= rhs._n); }
		bool operator<=( Whatever const & rhs ) const { return (this->_n <= rhs._n); }
		int getN(void) const { return (this->_n); }

	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Whatever const & rhs) { o << rhs.getN(); return(o); }
*/

#endif
