/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:31:22 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/09 12:06:35 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#define DEFAULT "\033[0;39m"
#define B_RED "\033[1;31m"
#define B_BLUE "\033[1;94m"
#define B_YELLOW "\033[1;33m"
#define B_GREEN "\033[1;32m"
#define B_PINK "\033[1;35m"

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					fpValue;
		static const int	fractBits = 8;
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& copy);
		~Fixed();

		int 	getRawBits ( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
		Fixed& operator=(Fixed const & rhs);
		
		/* ---- Comparison Operators ----*/
		bool operator>(Fixed const & rhs);
		bool operator<(Fixed const & rhs);
		bool operator>=(Fixed const & rhs);
		bool operator<=(Fixed const & rhs);
		bool operator==(Fixed const & rhs);
		bool operator!=(Fixed const & rhs);

		/* ---- Arithmetic Operators ----*/
		Fixed operator+(Fixed const & rhs);
		Fixed operator-(Fixed const & rhs);
		Fixed operator*(Fixed const & rhs);
		Fixed operator/(Fixed const & rhs);

		/* ----  Increment/Decrement ----*/
		Fixed operator++();		//pre-increment
		Fixed operator++(int);	//post-increment
		Fixed operator--();		//pre-decrement
		Fixed operator--(int);	//post-decrement
		
		/* ----  Min/Max Functions ----*/
		static Fixed& min(Fixed& f1, Fixed& f2);
		static Fixed const & min(Fixed const & f1, Fixed const & f2);
		static Fixed& max(Fixed& f1, Fixed& f2);
		static Fixed const & max(Fixed const & f1, Fixed const & f2);
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);

#endif