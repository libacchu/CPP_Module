/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:01:36 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/15 10:11:15 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main ( void )
{
	{
		std::cout << std::endl;
		std::cout << B_BLUE "----- [TEST 1] -----" DEFAULT<< std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		
		delete meta;
		delete j;
		delete i;
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "----- [TEST 2] -----" DEFAULT<< std::endl;
		const WrongAnimal* wrongmeta = new WrongAnimal();
		const WrongAnimal* wrongcat = new WrongCat();
		
		std::cout << wrongcat->getType() << " " << std::endl;
		wrongcat->makeSound();
		wrongmeta->makeSound();

		delete wrongmeta;
		delete wrongcat;
	}
	
	return 0;
}