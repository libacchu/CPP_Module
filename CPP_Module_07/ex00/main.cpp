/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:12:14 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/09 08:32:55 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void )
{
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "----- TEST 1 -----" DEFAULT << std::endl;
		int a = 2;
		int b = 3;

		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::cout << std::endl;
		
		std::string c = "chaine1";
		std::string d = "chaine2";
		
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << B_YELLOW "----- TEST 2 -----" DEFAULT << std::endl;
		double a = 2.5;
		double b = 2.6;

		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::cout << std::endl;
	}
	/*
	{
		std::cout << B_YELLOW "----- TEST 3 -----" DEFAULT << std::endl;
		Whatever a(5);
		Whatever b(6);
		::swap( a, b );

		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::cout << std::endl;
	}
	*/
	return 0;
}
