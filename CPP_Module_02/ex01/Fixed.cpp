/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:31:26 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/09 09:51:39 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->fpValue = 0;
}

Fixed::Fixed(const int value) : fpValue( value ) {
	std::cout << "Int constructor called" << std::endl;
	this->fpValue = value << this->fractBits;
}

/* 
To convert from floating-point to fixed-point, we follow this algorithm:
	(1) Calculate x = floating_input * 2^(fractional_bits)
	(2) Round x to the nearest whole number (e.g. round(x))
	(3) Store the rounded x in an integer container
*/

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->fpValue = roundf(value * (1 << this->fractBits));
}

Fixed::Fixed(const Fixed& copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(Fixed const & rhs) {
	std::cout << "Copy assignment operator called"<< std::endl;
	this->fpValue = rhs.getRawBits(); //getRawBits member function called
	return (*this);
}

Fixed::~Fixed( void ) {
	std::cout << "Deconstructor called" << std::endl;
	return ;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fpValue);
}

void Fixed::setRawBits( int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fpValue = raw;
	return ;
}

float Fixed::toFloat( void ) const {
	return ((float)this->fpValue / (float)(1 << this->fractBits));
}

int	Fixed::toInt( void ) const {
	return (fpValue >> fractBits);
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return (o);
}
