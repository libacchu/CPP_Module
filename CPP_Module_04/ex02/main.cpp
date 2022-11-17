/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:01:36 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/17 14:02:48 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << std::endl;
		std::cout << B_BLUE "----- [TEST 1] -----" DEFAULT<< std::endl;
		
		const A_Animal* j = new Dog();
		const A_Animal* i = new Cat();
		
		delete j;//should not create a leak
		delete i;
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "----- [TEST 2] -----" DEFAULT<< std::endl;
		
		const A_Animal* dog = new Dog();
		const A_Animal* cat = new Cat();

		delete dog;
		delete cat;		
	}
	return 0;
}
