/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:11:19 by libacchu          #+#    #+#             */
/*   Updated: 2022/12/16 18:36:52 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarTypes.hpp"

int	main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
			throw (ScalarTypes::WrongInput());
		ScalarTypes type( argv[1] );
		type.toChar();
		type.toInt();
		type.toFloat();
		type.toDouble();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	
	return (0);
}
