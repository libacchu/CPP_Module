/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:08:03 by libacchu          #+#    #+#             */
/*   Updated: 2023/03/16 14:34:36 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char** av)
{
	if (ac < 2)
	{
		std::cerr << "Error: Missing filename" << std::endl;
		return (1);
	}
	BitcoinExchange obj(av[1]);
	return (0);
}