/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:04:13 by libacchu          #+#    #+#             */
/*   Updated: 2023/03/15 14:26:58 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>


class PmergeMe
{
	private:
		std::vector<int> _v;

	public:
		PmergeMe();
		PmergeMe(char** av);
		PmergeMe( PmergeMe const & src );
		~PmergeMe();
		PmergeMe &		operator=( PmergeMe const & rhs );
};

std::ostream &			operator<<( std::ostream & o, PmergeMe const & i );

#endif
