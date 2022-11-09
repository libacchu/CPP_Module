/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:31:19 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/09 12:39:14 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "---- Test from Subject ----" DEFAULT << std::endl;
		
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		
		std::cout << b << std::endl;
		
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "---- Comparison Operators ----" DEFAULT << std::endl;
		
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		
		std::cout << B_PINK "a > b: " DEFAULT << (a > b) << std::endl;
		std::cout << B_PINK "a < b: " DEFAULT << (a < b) << std::endl;
		std::cout << B_PINK "a >= b: " DEFAULT << (a >= b) << std::endl;
		std::cout << B_PINK "a <= b: " DEFAULT << (a <= b) << std::endl;
		std::cout << B_PINK "a == b: " DEFAULT << (a == b) << std::endl;
		std::cout << B_PINK "a != b: " DEFAULT << (a != b) << std::endl;
		
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "---- Comparison Operators ----" DEFAULT << std::endl;
		
		Fixed a (9.5f);
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		
		std::cout << B_PINK "a + b: " DEFAULT << a + b << std::endl;
		std::cout << B_PINK "a - b: " DEFAULT << a - b << std::endl;
		std::cout << B_PINK "a * b: " DEFAULT << a * b << std::endl;
		std::cout << B_PINK "a / b: " DEFAULT << a / b << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "---- Increment/Decrement ----" DEFAULT << std::endl;
		
		Fixed a (5);
		Fixed b( 3);
		
		std::cout << B_PINK "a: " DEFAULT << a << std::endl;
		std::cout << B_PINK "a++: " DEFAULT << a++ << std::endl;
		std::cout << B_PINK "a: " DEFAULT << a << std::endl;
		std::cout << B_PINK "++a: " DEFAULT << ++a << std::endl;
		std::cout << B_PINK "a: " DEFAULT << a << std::endl;
		std::cout << std::endl;
		std::cout << B_PINK "b: " DEFAULT << b << std::endl;
		std::cout << B_PINK "b--: " DEFAULT << b-- << std::endl;
		std::cout << B_PINK "b: " DEFAULT << b << std::endl;
		std::cout << B_PINK "--b: " DEFAULT << --b << std::endl;
		std::cout << B_PINK "b: " DEFAULT << b << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "---- Min/Max Functions ----" DEFAULT << std::endl;
		
		Fixed a (9);
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		
		std::cout << B_PINK "min(a, b): " DEFAULT << Fixed::min(a, b) << std::endl;
		std::cout << B_PINK "max(a, b):" DEFAULT << Fixed::max(a, b)<< std::endl;
	}
	std::cout << std::endl;
	return (0);
}