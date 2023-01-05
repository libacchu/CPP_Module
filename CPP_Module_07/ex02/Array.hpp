/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:19:46 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/05 16:24:58 by libacchu         ###   ########.fr       */
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
		Array( void ): _size(1), _array(new T*()) {
			std::cout << B_BLUE "Default constructor called" DEFAULT << std::endl;
		}
		Array( unsigned int n ): _size(n), _array(new T[n]) {
			std::cout << B_BLUE "Unsigned int constructor called" DEFAULT << std::endl;
		}
		Array( const Array& copy ){
			std::cout << B_BLUE "Copy constructor called" DEFAULT << std::endl;
			*this = copy;
		}
		Array* operator=( const Array& copy ){
			std::cout << B_BLUE "Assignment operator called" DEFAULT << std::endl;
			*this = copy;
			return (*this);
		}
		virtual ~Array( void );
		
		T& operator[]( int pos ) {
			if (pos >= _size || pos < 0)
				throw (Array::OutOfBounds());
			return (_array[pos]);
		}
		
		int	size( void ) {
			return (_size);
		}
		
		class OutOfBounds : public std::exception {
			virtual const char* what() const throw() {
				return ("Out of Bounds");
			}
		};
};

#endif