/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:24:55 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/06 15:06:12 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called." << std::endl;
	this->ideas = new std::string[100];
}

Brain::Brain(const Brain& copy) {
	std::cout << "Brain copy constructor called." << std::endl;
	*this = copy;
	return ;
}

Brain& Brain::operator=( const Brain& rhs) {
	std::cout << "Brain copy operator called." << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain destructor called." << std::endl;
	delete [] this->ideas;
}

const std::string*	Brain::getIdeas() const {
	return (this->ideas);
}

void Brain::setIdeas( std::string idea, int index) {
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
}
