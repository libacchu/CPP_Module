/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:30:37 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/09 08:47:51 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# define DEFAULT "\033[0;39m"
# define B_RED "\033[1;31m"
# define B_BLUE "\033[1;94m"
# define B_YELLOW "\033[1;33m"
# define B_GREEN "\033[1;32m"
# define B_PINK "\033[1;35m"

#include <iostream>
#include <string>

template< typename T >
void	addOne( T* input ) {
	*input = *input + 1;
}

template< typename T >
void	iter( T* arr, size_t len, void (*func)(T*) ) {
	for (size_t i = 0; i < len; i++) {
		(*func)(&arr[i]);
	}
}

class Whatever {
	public:
		Whatever( int n ) : _n( n ) {}
		bool operator==( Whatever const & rhs ) const { return (this->_n == rhs._n); }
		bool operator!=( Whatever const & rhs ) const { return (this->_n != rhs._n); }
		bool operator>( Whatever const & rhs ) const { return (this->_n > rhs._n); }
		bool operator<( Whatever const & rhs ) const { return (this->_n < rhs._n); }
		bool operator>=( Whatever const & rhs ) const { return (this->_n >= rhs._n); }
		bool operator<=( Whatever const & rhs ) const { return (this->_n <= rhs._n); }
		int operator+( Whatever const & rhs ) const { return (this->_n + rhs._n); }

		int getN(void) const { return (this->_n); }

	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Whatever const & rhs) { o << rhs.getN(); return(o); }

#endif
