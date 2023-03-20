/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:01:18 by libacchu          #+#    #+#             */
/*   Updated: 2023/03/20 09:27:10 by libacchu         ###   ########.fr       */
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
			if (!isdigit(av[i][j]))
			{
				std::cout << "Error" << std::endl;
				return;
			}
			j++;
		}
        if (!isInt(av[i]))
        {
            return ;
        }
		vec.push_back(atoi(av[i]));
		i++;
	}

	/* Print before */
	std::cout << "Before:";
    printVector(vec);
	std::sort(vec.begin(), vec.end());
	
	/* Print before */
	std::cout << "After:";
    printVector(vec);

    /* Sort and Time vector */
	long double start = get_time_in_ms();
	sortVector(ac, av);
	long double end = get_time_in_ms();
	std::cout << "Time to process a range of " << _v.size() \
            <<  " elements with std::vector : " << std::fixed \
            << std::setprecision(0) << (end - start) \
            << " us" <<std::endl;

    /* Sort and Time deque */
	start = get_time_in_ms();
	sortDeque(ac, av);
	end = get_time_in_ms();
	std::cout << "Time to process a range of " << _v.size() \
            <<  " elements with std::deque : " << std::fixed \
            << std::setprecision(0) << (end - start) \
            << " us" <<std::endl;
}

long double	PmergeMe::get_time_in_ms()
{
	struct timeval	tv = {};

	gettimeofday(&tv, NULL);
	return (1000000 * tv.tv_sec + tv.tv_usec);
}

/*-------------------------------------------------------------------------------------------*/

void PmergeMe::sortVector(int ac, char** av)
{
	int i = 1;
	while (i < ac)
		_v.push_back(atoi(av[i++]));
	vecMergeInsertSort(_v, 0, _v.size() - 1);
}

void PmergeMe::vecMergeSort(std::vector<int> &vec, int low, int mid, int high)
{
	std::vector<int> temp(high - low + 1);
    int i = low, j = mid + 1, a = 0;

    while (i <= mid && j <= high) {
        if (vec[i] <= vec[j])
            temp[a++] = vec[i++];
        else
            temp[a++] = vec[j++];
    }
    while (i <= mid)
        temp[a++] = vec[i++];
    while (j <= high)
        temp[a++] = vec[j++];
    for (int k = 0; k < a; ++k)
        vec[low + k] = temp[k];
}

void PmergeMe::vecInsertSort(std::vector<int> &vec, int low, int high)
{
	for (int i = low + 1; i <= high; ++i)
	{
		int tmp_var = vec[i];
		int j = i - 1;
		while (j >= low && vec[j] > tmp_var) {
			vec[j + 1] = vec[j];
			--j;
		}
		vec[j + 1] = tmp_var;
	}
}

void PmergeMe::vecMergeInsertSort(std::vector<int>& vec, int low, int high) {
    if (high - low + 1 < 16) {
        vecInsertSort(vec, low, high);
    } else {
        int mid = low + (high - low) / 2;
        vecMergeInsertSort(vec, low, mid);
        vecMergeInsertSort(vec, mid + 1, high);
        vecMergeSort(vec, low, mid, high);
    }
}

/*-------------------------------------------------------------------------------------------*/

void PmergeMe::sortDeque(int ac, char** av)
{
    int i = 1;
    while (i < ac)
        _d.push_back(atoi(av[i++]));
    dequeMergeInsertSort(_d, 0, _v.size()-1);
}

void PmergeMe::dequeMergeSort(std::deque<int> &deq, int low, int mid, int high)
{
    std::deque<int> temp(high - low + 1);
    int i = low, j = mid + 1, a = 0;

    while (i <= mid && j <= high) {
        if (deq[i] <= deq[j])
            temp[a++] = deq[i++];
        else
            temp[a++] = deq[j++];
    }
    while (i <= mid)
        temp[a++] = deq[i++];
    while (j <= high)
        temp[a++] = deq[j++];
    for (int k = 0; k < a; ++k)
        deq[low + k] = temp[k];
}

void PmergeMe::dequeInsertSort(std::deque<int> &deq, int low, int high)
{
    for (int i = low + 1; i <= high; ++i)
    {
        int tmp_var = deq[i];
        int j = i - 1;
        while (j >= low && deq[j] > tmp_var) {
            deq[j + 1] = deq[j];
            --j;
        }
        deq[j + 1] = tmp_var;
    }
}

void PmergeMe::dequeMergeInsertSort(std::deque<int> &deq, int low, int high)
{
    if (high - low + 1 < 2) {
        dequeInsertSort(deq, low, high);
    } else {
        int mid = low + (high - low) / 2;
        dequeMergeInsertSort(deq, low, mid);
        dequeMergeInsertSort(deq, mid + 1, high);
        dequeMergeSort(deq, low, mid, high);
    }
}

/*-------------------------------------------------------------------------------------------*/

void PmergeMe::printVector(std::vector<int>& vec)
{
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
}

void PmergeMe::printDeque(std::deque<int>& vec)
{
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
}

/*-------------------------------------------------------------------------------------------*/

PmergeMe::PmergeMe( const PmergeMe & src ) { (void) src; }

PmergeMe::~PmergeMe() {}

PmergeMe &				PmergeMe::operator=( PmergeMe const & rhs )
{
	(void) rhs;
	return *this;
}

bool PmergeMe::isInt(char *string)
{
    if (strlen(string) > 10)
    {
        std::cout << "Error" << std::endl;
        return (false);
    }
    long numL = atol(string);
    int numI = atoi(string);
    if (numL != (long)numI)
    {
        std::cout << "Error" << std::endl;
        return (false);
    }
    return (true);
}

