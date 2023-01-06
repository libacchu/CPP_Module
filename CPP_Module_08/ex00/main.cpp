/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:47:25 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/06 12:11:31 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void )
{
	// {
	// 	std::vector<int> myints;
	// 	myints.push_back(10);
	// 	myints.push_back(30);
	// 	myints.push_back(40);
	// 	myints.push_back(20);
	// 	try
	// 	{
	// 		std::vector<int>::iterator it = easyfind(myints, );
	// 		std::cout << B_BLUE "Element found: " DEFAULT << *it << std::endl;
	// 	}
	// 	catch (...)
	// 	{
	// 		std::cout << B_RED "Element not found" DEFAULT << std::endl;
	// 	}
	// }
	{
		int myints[] = { 10, 20, 30, 40 };
		// int * p;

		// // p = std::find (myints, myints+4, 29);
		// p = easyfind (myints, 29);
		// if (p != myints+4)
		// 	std::cout << "Element found in myints: " << *p << '\n';
		// else
		// 	std::cout << "Element not found in myints\n";

		// using std::find with vector and iterator:
		std::vector<int> myvector (myints,myints+4);
		std::vector<int>::iterator it;

		it = find (myvector.begin(), myvector.end(), 29);
		if (it != myvector.end())
			std::cout << "Element found in myvector: " << *it << '\n';
		else
			std::cout << "Element not found in myvector\n";
	}
	return (0);
}