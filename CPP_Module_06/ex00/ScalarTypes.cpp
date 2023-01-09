/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarTypes.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:54:49 by libacchu          #+#    #+#             */
/*   Updated: 2023/01/08 18:36:38 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarTypes.hpp"

ScalarTypes::ScalarTypes( void )
{
	std::cout << B_GREEN "ScalarTypes default constructor called." DEFAULT << std::endl;
}

ScalarTypes::ScalarTypes( const std::string input ) : _input( input ), _valid(false)
{
	std::cout << B_GREEN "ScalarTypes parameter constructor called." DEFAULT << std::endl;
	if (input == "0")
	{
		_double = 0;
		_valid = true;
	}
	else
	{
		this->_double = atof( _input.c_str() );
		if (_double != 0)
			_valid = true;
	}
}

ScalarTypes::ScalarTypes( const ScalarTypes & src )
{
	std::cout << B_GREEN "ScalarTypes copy constructor called." DEFAULT << std::endl;
	*this = src;
}

ScalarTypes::~ScalarTypes()
{
	std::cout << B_GREEN "ScalarTypes destructor called." DEFAULT << std::endl;
}

ScalarTypes &	ScalarTypes::operator=( ScalarTypes const & rhs )
{
	std::cout << B_GREEN "ScalarTypes copy operator called." DEFAULT << std::endl;
	(void) rhs;
	return *this;
}

/*--------------------------------- METHODS ---------------------------------*/

void	ScalarTypes::toChar( void )
{
	char to_convert = static_cast<char> (_double);
	
	std::cout << "char: ";
	if (_valid)
	{
		if (_input.length() > 0 && isprint( to_convert ))
			std::cout << to_convert << std::endl;
		else if ( _double >= 0 && _double <= 255)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "impossible" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

void	ScalarTypes::toInt( void )
{
	int to_convert = static_cast<int> ( _double );
	
	std::cout << "int: ";
	if (_valid && _double == _double)
	{
		if ( _double > INT_MAX || _double < INT_MIN )
			std::cout << "impossible"  << std::endl;
		else
			std::cout << to_convert << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

void	ScalarTypes::toDouble( void )
{
	std::cout << "double: ";
	if (_valid)
	{
		std::cout << static_cast<double>(_double);
		if (static_cast<double>(_double) == static_cast<int>(_double))
			std::cout << ".0";
		std::cout << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

void	ScalarTypes::toFloat( void )
{
	std::cout << "float: ";
	if (_valid)
	{
		std::cout << static_cast<float>(_double);
		if (static_cast<double>(_double) == static_cast<int>(_double))
			std::cout << ".0";
		std::cout << "f" <<std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

const char* ScalarTypes::WrongInput::what() const throw() {
	return ("Exception: Wrong input");
}

