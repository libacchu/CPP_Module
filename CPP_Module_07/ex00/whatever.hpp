/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:14:11 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/17 18:31:45 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template< typename T >
T const&	max( T const& x, T const& y ) {
	return ( (x > y) ? x : y );
}

template< typename T >
T const&	min( T const& x, T const& y ) {
	return ( (x < y) ? x : y );
}

template< typename T >
void	swap( T& x, T& y ) {
	T tmp = x;
	x = y;
	y = tmp;
}

#endif