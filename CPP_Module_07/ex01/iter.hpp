/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:30:37 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/17 18:54:13 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template< typename T >
void	addOne( T* input ) {
	*input = *input + 1;
}

template< typename T >
void	iter( T* arr, size_t len, void (*func)(T*) ) {
	for (size_t i = 0; i < len; i++) {
		(*func)(&arr[i]);
	}
}

#endif