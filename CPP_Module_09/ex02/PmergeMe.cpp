/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:01:18 by libacchu          #+#    #+#             */
/*   Updated: 2023/03/16 15:06:24 by libacchu         ###   ########.fr       */
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
			j++;
		}
		vec.push_back(atoi(av[i]));
		i++;
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
	
	
	long double start = get_time_in_ms();
	sortVector(ac, av);
	long double end = get_time_in_ms();

	std::cout << "start = " << start << std::endl;
	std::cout << "end = " << end << std::endl;
	std::cout << "Time to process a range of " << _v.size() <<  " elements with std::vector : " << std::fixed << (end - start) << " us" <<std::endl;
	
	start = get_time_in_ms();
	sortDeque(ac, av);
	end = get_time_in_ms();
	
	std::cout << "start = " << start << std::endl;
	std::cout << "end = " << end << std::endl;
	std::cout << "Time to process a range of " << _v.size() <<  " elements with std::deque : " << std::fixed << (end - start) << " us" <<std::endl;
}

long double	PmergeMe::get_time_in_ms(void)
{
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	return ((tv.tv_sec * 1000000) + (tv.tv_usec));
}


void PmergeMe::sortVector(int ac, char** av)
{
	int i = 1;
	while (i < ac)
	{
		_v.push_back(atoi(av[i++]));
	}
	vecMergeInsertSort(_v, 0, _v.size() - 1);
}

void PmergeMe::sortDeque(int ac, char** av)
{
	int i = 1;
	while (i < ac)
	{
		_d.push_back(atoi(av[i++]));
	}
}

void dequeMergeSort(std::deque<int> &deq, int low, int mid, int high)
{
	std::deque<int> temp(high - low + 1);
    int i = low, j = mid + 1, k = 0;
    while (i <= mid && j <= high) {
        if (deq[i] <= deq[j]) {
            temp[k++] = deq[i++];
        } else {
            temp[k++] = deq[j++];
        }
    }
    while (i <= mid) {
        temp[k++] = deq[i++];
    }
    while (j <= high) {
        temp[k++] = deq[j++];
    }
    for (int i = 0; i < k; ++i) {
        deq[low + i] = temp[i];
    }
}

void dequeInsertSort(std::deque<int> &deq, int low, int high)
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

void dequeMergeInsertSort(std::deque<int> &deq, int low, int high)
{
	if (high - low + 1 < 16) {
        dequeInsertSort(deq, low, high);
    } else {
        int mid = low + (high - low) / 2;
        dequeMergeInsertSort(deq, low, mid);
        dequeMergeInsertSort(deq, mid + 1, high);
        dequeMergeSort(deq, low, mid, high);
    }
}

void PmergeMe::vecMergeSort(std::vector<int> &vec, int low, int mid, int high)
{
	std::vector<int> temp(high - low + 1);
    int i = low, j = mid + 1, k = 0;
    while (i <= mid && j <= high) {
        if (vec[i] <= vec[j]) {
            temp[k++] = vec[i++];
        } else {
            temp[k++] = vec[j++];
        }
    }
    while (i <= mid) {
        temp[k++] = vec[i++];
    }
    while (j <= high) {
        temp[k++] = vec[j++];
    }
    for (int i = 0; i < k; ++i) {
        vec[low + i] = temp[i];
    }
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

void PmergeMe::printVector(std::vector<int>& vec)
{
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;
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