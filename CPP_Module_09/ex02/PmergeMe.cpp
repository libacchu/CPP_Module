/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:01:18 by libacchu          #+#    #+#             */
/*   Updated: 2023/03/15 17:46:31 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(int ac, char** av)
{
	std::vector<int> vec;
	/* Check if all input are (positive) number */
	int i = 1;
	while(i < ac)
	{
		int j = 0;
		while(av[i][j])
		{
			if (isdigit(av[i][j]) == false)
			{
				std::cout << "Error" << std::endl;
				return;
			}
		}
		vec.push_back(atoi(av[i]));
	}


	/* Print before */
	std::cout << "Before:";
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << " " << vec[i];
	}
	std::cout << std::endl;

	std::sort(vec.begin(), vec.end());
	
	/* Print before */
	std::cout << "After:";
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << " " << vec[i];
	}
	std::cout << std::endl;
	
	sortVector(av);
}

void PmergeMe::sortVector(char** av)
{
	
}

PmergeMe::PmergeMe( const PmergeMe & src )
{
	(void) src;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe &				PmergeMe::operator=( PmergeMe const & rhs )
{
	(void) rhs;
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PmergeMe const & i )
{
	(void) o;
	(void) i;
	//o << "Value = " << i.getValue();
	return o;
}


void vecMergeSort(std::vector<int> &vec)
{
	
}

void vecInsertSort()