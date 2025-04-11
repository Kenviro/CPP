/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:31:35 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/11 13:56:26 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _fixedPointValue(0) {}

Fixed::Fixed(const int src)
{
	_fixedPointValue = src << _fractionalBits;
}

Fixed::Fixed(const float src)
{
	_fixedPointValue = roundf(src * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& src)
{
	_fixedPointValue = src.getRawBits();	
}


Fixed &Fixed::operator=(const Fixed& copy)
{
	if (this != &copy)
	{
		_fixedPointValue = copy.getRawBits();
	}
	return *this;
}

Fixed::~Fixed() {}

Fixed Fixed::max(Fixed& a, Fixed& b)
{
	if (a._fixedPointValue > b._fixedPointValue)
		return a;
	else
		return b;
}

Fixed Fixed::max(const Fixed&a, const Fixed& b)
{
	if (a._fixedPointValue > b._fixedPointValue)
		return a;
	else
		return b;
}

Fixed Fixed::min(Fixed& a, Fixed& b)
{
	if (a._fixedPointValue < b._fixedPointValue)
		return a;
	else
		return b;
}

Fixed Fixed::min(const Fixed&a, const Fixed& b)
{
	if (a._fixedPointValue < b._fixedPointValue)
		return a;
	else
		return b;
}

int	Fixed::getRawBits() const
{
	return (_fixedPointValue); 
}

int	Fixed::toInt() const
{
	return (_fixedPointValue >> _fractionalBits);
}

float Fixed::toFloat() const
{
	return (float)_fixedPointValue / (1 << _fractionalBits);
}

void Fixed::setRawBits(int const raw)
{
	_fixedPointValue = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

Fixed& Fixed:: operator--()
{
	this->_fixedPointValue -= 1;
	return *this;
}

Fixed& Fixed:: operator++()
{
	this->_fixedPointValue += 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	
	this->_fixedPointValue -= 1;
	return temp;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;

	this->_fixedPointValue += 1;
	return temp;
}

Fixed Fixed::operator+(const Fixed& other) const
{
	Fixed result;
	
	result._fixedPointValue = this->_fixedPointValue + other._fixedPointValue;
	return result;
}

Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed result;

	result._fixedPointValue = this->_fixedPointValue - other._fixedPointValue;
	return result;
}

Fixed Fixed::operator*(const Fixed& other) const
{
	Fixed result;
	
	int64_t mult = static_cast<int64_t>(this->_fixedPointValue) * other._fixedPointValue;
	result._fixedPointValue = static_cast<int>(mult >> _fractionalBits);
	return result;
}

Fixed Fixed::operator/(const Fixed& other) const
{
	Fixed result;
	
	int64_t div = (static_cast<int64_t>(this->_fixedPointValue) << _fractionalBits) / other._fixedPointValue;
	result._fixedPointValue = static_cast<int>(div);
	return result;
}

bool Fixed::operator>(const Fixed& other) const
{
	return (this->_fixedPointValue > other._fixedPointValue);
}

bool Fixed::operator<(const Fixed& other) const
{
	return (this->_fixedPointValue < other._fixedPointValue);
}

bool Fixed::operator>=(const Fixed& other) const
{
	return (this->_fixedPointValue >= other._fixedPointValue);
}

bool Fixed::operator<=(const Fixed& other) const
{
	return (this->_fixedPointValue <= other._fixedPointValue);
}

bool Fixed::operator==(const Fixed& other) const
{
	return (this->_fixedPointValue == other._fixedPointValue);
}

bool Fixed::operator!=(const Fixed& other) const
{
	return (this->_fixedPointValue != other._fixedPointValue);
}
