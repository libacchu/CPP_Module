/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:03:57 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/16 19:46:46 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <string>
# include <stdint.h>

# define DEFAULT "\033[0;39m"
# define B_RED "\033[1;31m"
# define B_BLUE "\033[1;94m"
# define B_YELLOW "\033[1;33m"
# define B_GREEN "\033[1;32m"
# define B_PINK "\033[1;35m"

struct Data
{
	std::string string1;
	std::string string2;
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif