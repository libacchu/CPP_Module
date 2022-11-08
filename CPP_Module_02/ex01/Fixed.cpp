/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:31:26 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/07 08:46:15 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static const int fractBits = 8;

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->fpValue = 0;
}

Fixed::Fixed(const int value) : fpValue{ value } {
	std::cout << "Int constructor called" << std::endl;
	// this->fpValue = value;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->fpValue = value;
}

Fixed::Fixed(const Fixed& copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(Fixed const & rhs) {
	std::cout << "Copy assignment operator called"<< std::endl;
	this->fpValue = rhs.getRawBits();
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
	
}

int	Fixed::toInt( void ) const {
	
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs) {
	o << rhs.getRawBits();
	return (o);
}
