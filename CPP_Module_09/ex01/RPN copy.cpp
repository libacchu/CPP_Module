/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:01:18 by libacchu          #+#    #+#             */
/*   Updated: 2023/03/17 13:17:40 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

double    to_double(std::string str)
{
    double    x;
	int point = 0;
	
	for (size_t i = 0; i < str.length(); i++)
	{
		if (isspace(str[i]) != 0)
			continue;
		if (str[i] == '.')
			point++;
		if (point > 1)
			return (-11);
		if (isdigit(str[i]) == 0 && str[i] != '.')
			return (-11);
	}
    std::istringstream ss(str);
    ss >> x;
    return x;
}

std::string ft_trim_white_space(std::string &str)
{
	size_t first = str.find_first_not_of(" \t\n\v\f\r");
	if (std::string::npos == first)
		return str;
	size_t last = str.find_last_not_of(" \t\n\v\f\r");
	return str.substr(first, (last - first + 1));
}

RPN::RPN() {}

RPN::RPN(std::string input)
{
	bool validSum = false;
	// unsigned int i;
	double num1 = 0, num2 = 0, sum = 0;
	if (input.find_first_not_of("0123456789+-*/ ") != std::string::npos)
	{
		std::cerr << "Error: Invalid input" << std::endl;
		return ;
	}

	std::istringstream ss(input);
	std::string element;
	

	while (getline(ss, element, ' ') && !ss.eof())
	{
		std::cout << "element: " << element << std::endl;
		ft_trim_white_space(element);
		
		if (element == "+" || element == "-" || element == "/" || element == "*")
		{
			if (_st.size() < 2)
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
			if (element == "+")
			{
				sum = num1 + num2;
				// std::cout  << num1 << " + " << num2 << std::endl;
			}
			if (element == "-")
			{
				sum = num1 - num2;
				// std::cout  << num1 << " - " << num2 << std::endl;
			}
			if (element == "*")
			{
				sum = num1 * num2;
				// std::cout  << num1 << " * " << num2 << std::endl;
			}
			if (element == "/")
			{
				sum = num1 / num2;
				// std::cout  << num1 << " / " << num2 << std::endl;
			}
			_st.push(sum);
		}
		else
		{
			double num = to_double(element);
			std::cout << "num: " << num << std::endl;
			if (num >= 10 || num <= -10)
			{
				std::cerr << "Error: Invalid input" << std::endl;
				return ;
			}
		}
	}
	if (validSum == true && _st.size() == 1)
		std::cout << sum << std::endl;
	// else
	// 	std::cerr << "Error" << std::endl;
	
		// else
		// {
		// 	std::cerr << "Error: Invalid operations" << std::endl;
		// 	validSum = false;
		// 	break;
		// }

	
	// for(i = 0; i < input.size(); i++)
	// {
	// 	if (isspace(input[i]) == true)
	// 		continue;
	// 	if (isdigit(input[i]) == true)
	// 	{
	// 		_st.push(input[i] - '0');
	// 	}
	// 	else if (input[i] == '+' || input[i] == '-' || input[i] == '/' || input[i] == '*')
	// 	{
	// 		if (_st.size() < 2)
	// 		{
	// 			std::cerr << "Error: Invalid operations" << std::endl;
	// 			validSum = false;
	// 			break;
	// 		}
	// 		validSum = true;
	// 		num2 = _st.top();
	// 		_st.pop();
	// 		num1 = _st.top();
	// 		_st.pop();
	// 		if (input[i] == '+')
	// 		{
	// 			sum = num1 + num2;
	// 			// std::cout  << num1 << " + " << num2 << std::endl;
	// 		}
	// 		if (input[i] == '-')
	// 		{
	// 			sum = num1 - num2;
	// 			// std::cout  << num1 << " - " << num2 << std::endl;
	// 		}
	// 		if (input[i] == '*')
	// 		{
	// 			sum = num1 * num2;
	// 			// std::cout  << num1 << " * " << num2 << std::endl;
	// 		}
	// 		if (input[i] == '/')
	// 		{
	// 			sum = num1 / num2;
	// 			// std::cout  << num1 << " / " << num2 << std::endl;
	// 		}
	// 		_st.push(sum);
	// 	}
	// 	else
	// 	{
	// 		std::cerr << "Error: Invalid operations" << std::endl;
	// 		validSum = false;
	// 		break;
	// 	}
			
	// }
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
