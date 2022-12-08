/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:01:36 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/06 12:16:17 by libacchu         ###   ########.fr       */
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
		
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();

		std::cout << std::endl;

		delete dog;
		delete cat;		
	}
	{
		std::cout << std::endl;
		std::cout << B_BLUE "----- [TEST 2] -----" DEFAULT<< std::endl;
		
		unsigned int nbrOfAnimals = 6;
		Animal* animals[nbrOfAnimals];
		
		for (unsigned int i = 0; i < nbrOfAnimals; i++) {
			
			std::cout << "---- Animal " << i + 1 << " ----" << std::endl;
			if (i % 2)
				animals[i] = new Cat();
			else
				animals[i] = new Dog();
			std::cout << std::endl;
		}
		
		for (unsigned int i = 0; i < nbrOfAnimals; i++) {
			
			std::cout << "---- Animal " << i + 1 << " ----" << std::endl;
			delete animals[i];
			std::cout << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << B_BLUE "----- [TEST 3] -----" DEFAULT<< std::endl;

		Cat* cat1 = new Cat();
		// Cat cat2 = *cat1;
		Cat* cat3 = new Cat();
		// WrongCat* wrong1 = new WrongCat();
		// WrongCat* wrong2 = new WrongCat();
		
		std::cout << "cat1 = " << cat1->getType() << std::endl;
		// std::cout << "cat2 = " << cat2.getType() << std::endl;
		std::cout << "cat3 = " << cat3->getType() << std::endl;

		*cat3 = *cat1;
		cat1->setType("TomCat");
		// cat2.setType("hello hello");

		std::cout << "cat1 = " << cat1->getType() << std::endl;
		// std::cout << "cat2 = " << cat2.getType() << std::endl;
		std::cout << "cat3 = " << cat3->getType() << std::endl;
		
		// Brain* brain1 = new Brain();
		// cat1 = cat2;
		// brain1 = cat1->getBrain();
		
		// brain1->setIdeas("I am a cat", 0);
		// brain1->setIdeas("run!!!!!", 1);
		
		
		// Brain* brain2 = cat2->getBrain();
		
		// std::cout << std::endl;
		// std::cout << brain2->getIdeas()[0] << std::endl;
		// std::cout << brain2->getIdeas()[1] << std::endl;
		// std::cout << std::endl;
		
		delete cat1;
		delete cat3;
	}
	return 0;
}
