/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:04:13 by libacchu          #+#    #+#             */
/*   Updated: 2023/03/17 16:58:53 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <cstdlib>
# include <algorithm>
# include <sys/time.h>
# include <iomanip>
# include <vector>
# include <deque>


class PmergeMe
{
	private:
		std::vector<int> _v;
		std::deque<int> _d;
		const static int _group_size = 16;

	public:
		PmergeMe();
		PmergeMe(int ac, char** av);
		PmergeMe( PmergeMe const & src );
		~PmergeMe();
		PmergeMe &		operator=( PmergeMe const & rhs );

		void sortVector(int ac, char** av);
		static void vecMergeSort(std::vector<int> &vec, int low, int mid, int high);
		static void vecInsertSort(std::vector<int> &vec, int low, int high);
		void vecMergeInsertSort(std::vector<int>& vec, int low, int high);

		void sortDeque(int ac, char** av);
		static void dequeMergeSort(std::deque<int> &deq, int low, int mid, int high);
		static void dequeInsertSort(std::deque<int> &deq, int low, int high);
		void dequeMergeInsertSort(std::deque<int> &deq, int low, int high);
		
		static long double	get_time_in_ms();

		static void printVector(std::vector<int>& vec);
		static void printDeque(std::deque<int>& vec);

    bool isInt(char *string);
};



#endif
