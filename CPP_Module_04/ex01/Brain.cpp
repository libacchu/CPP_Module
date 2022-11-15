/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:24:55 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/15 10:41:06 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& copy) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Brain& Brain::operator=( const Brain& rhs) {
	std::cout << "Brain copy operator called" << std::endl;
	ideas = rhs.ideas;
}