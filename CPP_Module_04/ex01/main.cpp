/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:01:36 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/06 16:40:18 by libacchu         ###   ########.fr       */
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

		Cat*	cat1 = new Cat();
		Cat*	cat2 = new Cat();
		
		std::cout << std::endl;
		std::cout << "cat1 = " << cat1->getType() << std::endl;
		std::cout << "cat2 = " << cat2->getType() << std::endl;

		std::cout << std::endl;
		cat1->setType("TomCat");
		*cat2 = *cat1;				//Deep copy operator
		Cat		cat3 = *(cat1);		//Deep copy constructor
		cat2->setType("Kitten");
		cat3.setType("BobCat");
		
		std::cout << std::endl;
		std::cout << "cat1 = " << cat1->getType() << std::endl;
		std::cout << "cat2 = " << cat2->getType() << std::endl;
		std::cout << "cat3 = " << cat3.getType() << std::endl;
		
		std::cout << std::endl;
		delete cat1;
		delete cat2;
	}
	{
		std::cout << std::endl;
		std::cout << B_BLUE "----- [TEST 4] -----" DEFAULT<< std::endl;
		
		Cat*			cat1 = new Cat();
		Cat*			cat2 = new Cat();
		Brain*			brain1;
		Brain*			brain2;

		std::cout << std::endl;
		brain1 = cat1->getBrain();
		brain2 = cat2->getBrain();
		for (int i = 0; i < 100; i++)
			brain1->setIdeas("is this my brain?", i);
			
		*cat2 = *cat1; //deep copy
		std::cout << std::endl;
		std::cout << brain1->getIdeas()[2] << std::endl;
		std::cout << brain2->getIdeas()[2] << std::endl;
		
		std::cout << std::endl;
		brain2->setIdeas("testing my brain, is my brain working?", 11);
		std::cout << brain1->getIdeas()[11] << std::endl;
		std::cout << brain2->getIdeas()[11] << std::endl;
		
		std::cout << std::endl;
		delete cat1;
		delete cat2;
	}
	return 0;
}
