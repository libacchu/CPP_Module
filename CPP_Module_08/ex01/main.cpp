/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:19:12 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/15 08:58:36 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "----- PDF TEST -----" DEFAULT << std::endl;
		try
		{
			Span sp = Span(20);
			
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "----- TEST Exception -----" DEFAULT << std::endl;
		try
		{
			Span sp(10);
			
			srand(time(0));
			for (int i = 0; i < 11; i++) // tries to add 1 extra number
				sp.addNumber(rand() % (10 * 3));
			
			sp.print();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "----- TEST longestSpan Exception -----" DEFAULT << std::endl;
		try
		{
			Span sp(1);
			
			sp.addNumber(30);
			sp.print();
			
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "----- TEST shortestSpan Exception -----" DEFAULT << std::endl;
		try
		{
			Span sp(1);
			
			sp.addNumber(30);
			sp.print();
			
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "----- TEST Deep copy -----" DEFAULT << std::endl;
		try
		{
			Span sp(10);
			Span copy(11);
			
			srand(time(0));
			for (int i = 0; i < 8; i++)
				sp.addNumber(rand() % (10 * 3));
			
			copy = sp;
			copy.addNumber(55);
			copy.addNumber(60);
			
			sp.print();
			copy.print();

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << B_YELLOW "----- TEST 10000 -----" DEFAULT << std::endl;
		try
		{
			int	spanSize = 10000;
			Span sp = Span(spanSize);
			
			srand(time(0));
			for (int i = 0; i < spanSize; i++)
				sp.addNumber(rand() % (spanSize * 3));
			
			// Uncomment to print span
			// sp.print();
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
