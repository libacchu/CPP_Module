/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:01:18 by libacchu          #+#    #+#             */
/*   Updated: 2023/03/17 17:51:37 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const std::string& input)
{
	bool validSum = false;
	double num1 = 0, num2 = 0, sum = 0;
	if (input.find_first_not_of("0123456789+-*/ ") != std::string::npos)
	{
		std::cout << "Error: Invalid input" << std::endl;
		return ;
	}

	std::istringstream ss(input);
	std::string element;
	while (getline(ss, element, ' ') || !ss.eof())
	{
		element = ft_trim_white_space(element);
		
		if (element == "+" || element == "-" || element == "/" || element == "*")
		{
			if (_st.size() < 2)
			{
				std::cout << "Error: Invalid operations" << std::endl;
				return ;
			}
			validSum = true;
			num2 = _st.top();
			_st.pop();
			num1 = _st.top();
			_st.pop();
            sum = getResult(num1, num2, element);
            _st.push(sum);
		}
		else
		{
			double num = to_double(element);
			if (num >= 10 || num <= -10)
			{
				std::cout << "Error: Invalid input" << std::endl;
				return ;
			}
			_st.push(num);
		}
		if (ss.eof())
			break;
	}
	if (validSum && _st.size() == 1)
		std::cout <<sum << std::endl;
	else
		std::cout << "Error" << std::endl;
}

double RPN::getResult(double num1, double num2, const std::string &element) const {
    double sum;
    if (element == "+")
        sum = num1 + num2;
    if (element == "-")
        sum = num1 - num2;
    if (element == "*")
        sum = num1 * num2;
    if (element == "/")
        sum = num1 / num2;
    return sum;
}

RPN::RPN( const RPN & src )
{
	(void) src;
}

RPN::~RPN() {}

RPN &				RPN::operator=( RPN const & rhs )
{
	(void) rhs;
	return *this;
}

double    to_double(std::string str)
{
    double    x;
	int point = 0;
	
	if (str.find_first_not_of("0123456789-") != std::string::npos)
		return (-11);
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == '-')
			point++;
	}
	if (point > 1)
		return (-11);
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
