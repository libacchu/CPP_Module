/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:24:55 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/30 15:19:19 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called." << std::endl;
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
}

const std::string*	Brain::getIdeas() const {
	return (this->ideas);
}

void Brain::setIdeas( std::string idea, int index) {
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
}
