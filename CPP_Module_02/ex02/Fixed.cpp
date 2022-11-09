/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:31:26 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/09 12:08:23 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	// std::cout << "Default constructor called" << std::endl;
	this->fpValue = 0;
}

Fixed::Fixed(const int value) : fpValue( value ) {
	// std::cout << "Int constructor called" << std::endl;
	this->fpValue = value << this->fractBits;
}

/* 
To convert from floating-point to fixed-point, we follow this algorithm:
	(1) Calculate x = floating_input * 2^(fractional_bits)
	(2) Round x to the nearest whole number (e.g. round(x))
	(3) Store the rounded x in an integer container
*/

Fixed::Fixed(const float value) {
	// std::cout << "Float constructor called" << std::endl;
	this->fpValue = roundf(value * (1 << this->fractBits));
}

Fixed::Fixed(const Fixed& copy) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(Fixed const & rhs) {
	// std::cout << "Copy assignment operator called"<< std::endl;
	this->fpValue = rhs.getRawBits(); //getRawBits member function called
	return (*this);
}

Fixed::~Fixed( void ) {
	// std::cout << "Deconstructor called" << std::endl;
	return ;
}

int Fixed::getRawBits( void ) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->fpValue);
}

void Fixed::setRawBits( int const raw) {
	// std::cout << "setRawBits member function called" << std::endl;
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

/* ---------- Comparison Operators ----------*/

bool Fixed::operator>(Fixed const & rhs) {
	return (this->fpValue > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs) {
	return (this->fpValue < rhs.fpValue);
}

bool Fixed::operator>=(Fixed const & rhs) {
	return (this->fpValue >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs) {
	return (this->fpValue <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs) {
	return (this->fpValue == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs) {
	return (this->fpValue != rhs.getRawBits());
}

/* ---------- Arithmetic Operators ----------*/

Fixed Fixed::operator+(Fixed const & rhs) {
	Fixed ret(this->toFloat() + rhs.toFloat());
	return(ret);
}

Fixed Fixed::operator-(Fixed const & rhs) {
	Fixed ret(this->toFloat() - rhs.toFloat());
	return(ret);
}

Fixed Fixed::operator*(Fixed const & rhs) {
	
	Fixed ret(this->toFloat() * rhs.toFloat());
	return(ret);
}

Fixed Fixed::operator/(Fixed const & rhs) {
	Fixed ret(this->toFloat() / rhs.toFloat());
	return(ret);
}

/* ---------- Increment/Decrement ----------*/
Fixed Fixed::operator++() {
	//pre-increment
	++this->fpValue;
	return (*this);
}

Fixed Fixed::operator++(int) {
	//post-increment
	Fixed tmp(*this);
	
	this->fpValue++;
	return(tmp);
}

Fixed Fixed::operator--() {
	//pre-decrement
	--this->fpValue;
	return(*this);
}

Fixed Fixed::operator--(int) {
	//post-decrement
	Fixed tmp(*this);
	
	this->fpValue--;
	return(tmp);
	
}

/* ---------- Min/Max Functions ----------*/
Fixed& Fixed::min(Fixed& f1, Fixed& f2) {
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed const & Fixed::min(Fixed const & f1, Fixed const & f2){
	if (f1.getRawBits() < f2.getRawBits())
		return (f1);
	return (f2);
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2) {
	if (f1 > f2)
		return (f1);
	return (f2);
}

Fixed const & Fixed::max(const Fixed& f1, const Fixed& f2) {
	if (f1.getRawBits() > f2.getRawBits())
		return (f1);
	return (f2);
}
