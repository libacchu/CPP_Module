/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:21:32 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/16 19:48:39 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int	main( void )
{
	Data* 		ptr = new Data;
	Data* 		ptr2;
	uintptr_t	raw;
	
	ptr->string1 = "This is a string";
	ptr->string2 = "We're good to go!";
	
	std::cout << "ptr = " << ptr->string1 << std::endl;
	std::cout << "ptr = " << ptr->string2 << std::endl;
	
	raw = serialize(ptr);
	ptr2 = deserialize(raw);
	
	std::cout << "ptr2 = " << ptr2->string1 << std::endl;
	std::cout << "ptr2 = " << ptr2->string2 << std::endl;
	return (0);
}
