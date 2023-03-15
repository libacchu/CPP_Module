/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:01:18 by libacchu          #+#    #+#             */
/*   Updated: 2023/03/15 14:05:01 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(std::string input)
{
	bool validSum = false;
	unsigned int i;
	int num1 = 0, num2 = 0, sum = 0;
	for(i = 0; i < input.size(); i++)
	{
		if (isdigit(input[i]) == true)
		{
			_st.push(input[i] - '0');
		}
		else if (input[i] == '+' || input[i] == '-' || input[i] == '/' || input[i] == '*')
		{
			if (_st.size() != 2)
			{
				std::cerr << "Error: Invalid operations" << std::endl;
				validSum = false;
				break;
			}
			validSum = true;
			num2 = _st.top();
			_st.pop();
			num1 = _st.top();
			_st.pop();
			if (input[i] == '+')
			{
				sum = num1 + num2;
			}
			if (input[i] == '-')
			{
				sum = num1 - num2;
			}
			if (input[i] == '*')
			{
				sum = num1 * num2;
			}
			if (input[i] == '/')
			{
				sum = num1 / num2;
			}
			_st.push(sum);
		}
	}
	if (validSum == true && _st.size() == 1)
		std::cout << sum << std::endl;
	else
		std::cerr << "Error: Invalid operations" << std::endl;
}

RPN::RPN( const RPN & src )
{
	(void) src;
}

RPN::~RPN()
{
}

RPN &				RPN::operator=( RPN const & rhs )
{
	(void) rhs;
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RPN const & i )
{
	(void) o;
	(void) i;
	//o << "Value = " << i.getValue();
	return o;
}
