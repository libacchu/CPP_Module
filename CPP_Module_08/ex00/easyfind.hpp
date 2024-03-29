/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:47:22 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/15 09:13:34 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <iterator>
# include <vector>

# define DEFAULT "\033[0;39m"
# define B_RED "\033[1;31m"
# define B_BLUE "\033[1;94m"
# define B_YELLOW "\033[1;33m"
# define B_GREEN "\033[1;32m"
# define B_PINK "\033[1;35m"

class ElementNotFound : public std::exception
{
	virtual const char* what() const throw() {	
		return (B_RED "Element not found" DEFAULT);
	}
};

template< typename T >
typename T::iterator easyfind( T& container, int toFind )
{
	typename T::iterator result = std::find(container.begin(), container.end(), toFind);
	if (result == container.end())
		throw (ElementNotFound());
	return (result);
}

#endif
