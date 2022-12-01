/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:01:36 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/30 11:27:59 by libacchu         ###   ########.fr       */
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
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		std::cout << std::endl;
		
		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		std::cout << std::endl;
		
		dog->makeSound();
		cat->makeSound(); //will output the cat sound!
		meta->makeSound();
		std::cout << std::endl;
		
		delete meta;
		delete dog;
		delete cat;
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "----- [TEST 2] -----" DEFAULT<< std::endl;
		const WrongAnimal* wrongmeta = new WrongAnimal();
		const WrongAnimal* wrongcat = new WrongCat();
		std::cout << std::endl;
		
		std::cout << wrongmeta->getType() << " " << std::endl;
		std::cout << wrongcat->getType() << " " << std::endl;
		std::cout << std::endl;
		
		wrongmeta->makeSound();
		wrongcat->makeSound(); // <---will output the WrongAnimal sound
		std::cout << std::endl;

		delete wrongmeta;
		delete wrongcat;
	}
	
	return 0;
}