/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:04:13 by libacchu          #+#    #+#             */
/*   Updated: 2023/03/16 15:01:31 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <sys/time.h>
# include <vector>
# include <deque>


class PmergeMe
{
	private:
		std::vector<int> _v;
		std::deque<int> _d;

	public:
		PmergeMe();
		PmergeMe(int ac, char** av);
		PmergeMe( PmergeMe const & src );
		~PmergeMe();
		PmergeMe &		operator=( PmergeMe const & rhs );

		void sortVector(int ac, char** av);
		void vecMergeSort(std::vector<int> &vec, int low, int mid, int high);
		void vecInsertSort(std::vector<int> &vec, int low, int high);
		void vecMergeInsertSort(std::vector<int>& vec, int low, int high);

		void sortDeque(int ac, char** av);
		void dequeMergeSort(std::deque<int> &deq, int low, int mid, int high);
		void dequeInsertSort(std::deque<int> &deq, int low, int high);
		void dequeMergeInsertSort(std::deque<int> &deq, int low, int high);
		
		long double	get_time_in_ms(void);

		void printVector(std::vector<int>& vec);
};

std::ostream &			operator<<( std::ostream & o, PmergeMe const & i );

#endif
