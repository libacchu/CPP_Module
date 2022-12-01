/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:01:36 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/30 15:33:28 by libacchu         ###   ########.fr       */
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
		Cat *cat2 = new Cat();
		
		Brain* brain1 = new Brain();
		cat1 = cat2;
		brain1 = cat1->getBrain();
		
		brain1->setIdeas("I am a cat", 0);
		brain1->setIdeas("run!!!!!", 1);
		
		
		Brain* brain2 = cat2->getBrain();
		
		std::cout << std::endl;
		std::cout << brain2->getIdeas()[0] << std::endl;
		std::cout << brain2->getIdeas()[1] << std::endl;
		std::cout << std::endl;
		
		// delete cat1;
	}
	return 0;
}
