/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:19:46 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/15 10:14:29 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

# define DEFAULT "\033[0;39m"
# define B_RED "\033[1;31m"
# define B_BLUE "\033[1;94m"
# define B_YELLOW "\033[1;33m"
# define B_GREEN "\033[1;32m"
# define B_PINK "\033[1;35m"

template< typename T >
class Array
{
	private:
		int _size;
		T*	_array;
	public:
		Array<T>( void ): _size(0), _array(NULL) {
			std::cout << B_BLUE "Default constructor called" DEFAULT << std::endl;
		}
		Array<T>( unsigned int n ): _size(n) {
			std::cout << B_BLUE "Unsigned int constructor called" DEFAULT << std::endl;
			// if (n == 0)
			// 	throw (Array::OutOfBounds());
			_array = new T[n];
		}
		Array<T>( const Array& copy ): _size(0), _array(NULL) {
			std::cout << B_BLUE "Copy constructor called" DEFAULT << std::endl;
			*this = copy;
		}
		Array<T>& operator=( const Array& copy ){
			std::cout << B_BLUE "Assignment operator called" DEFAULT << std::endl;
			if (_size > 0)
				delete [] _array;
			_size = copy.size();
			_array = new T[_size];
			for (int i = 0; i < _size; i++) {
				_array[i] = copy._array[i];
			}
			return (*this);
		}
		~Array<T>( void ) {
			std::cout << B_BLUE "Destructor called" DEFAULT << std::endl;
			if (_size > 0)
				delete [] _array;
		}
		
		T& operator[]( int pos ) {
			if (pos >= _size || pos < 0)
				throw (std::out_of_range("Out of Range."));
			return (_array[pos]);
		}
		
		int	size( void ) const {
			return (_size);
		}
};

#endif
