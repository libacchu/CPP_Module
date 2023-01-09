/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 10:05:34 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/08 21:38:58 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

Base*	generate( void )
{
/* 
	It randomly instanciates A, B or C and returns the instance as a
	Base pointer. Feel free to use anything you like for the random
	choice implementation.
*/
	Base* ret;
	int randomNumber;
	
	srand( time(NULL) );
	randomNumber = rand() % 3;
	
	std::cout << B_GREEN "Generated" DEFAULT << std::endl;
	switch (randomNumber)
	{
		case 0:
			ret = new A();
			std::cout << "Class A" << std::endl;
			break;
		case 1:
			ret = new B();
			std::cout << "Class B" << std::endl;
			break;
		case 2:
			ret = new C();
			std::cout << "Class C" << std::endl;
			break;
	}
	return ( ret );
}

void identify( Base* p )
{
/*
	It prints the actual type of the object pointed to by p:
	"A", "B" or "C".
*/
	std::cout << B_PINK "Identify pointer" DEFAULT << std::endl;
	A* a = dynamic_cast<A*>(p);
	B* b = dynamic_cast<B*>(p);
	C* c = dynamic_cast<C*>(p);

	if (a) {
		std::cout << "Class A" << std::endl;
	}
	else if (b) {
		std::cout << "Class B" << std::endl;
	}
	else if (c) {
		std::cout << "Class C" << std::endl;
	}
}

void identify( Base& p )
{
	/*
		It prints the actual type of the object pointed to by p:
		"A", "B" or "C". Using a pointer inside this function
		is forbidden.
	*/
	std::cout << B_BLUE "Identify reference" DEFAULT << std::endl;
	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "Class A" << std::endl;
		(void) a;
	}
	catch (std::exception e) {
	}
	try {
		B& b = dynamic_cast<B&>(p);
		std::cout << "Class B" << std::endl;
		(void) b;
	}
	catch (std::exception e) {
		
	}
	try {
		C& c = dynamic_cast<C&>(p);
		std::cout << "Class C" << std::endl;
		(void) c;
	}
	catch (std::exception e) {
		
	}
}

int	main()
{
	Base* random1;
	
	random1 = generate();
	identify( random1 );
	identify( *random1 );
	
	return (0);
}
