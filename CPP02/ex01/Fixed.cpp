/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:31:35 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/11 10:21:52 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int src)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = src << _fractionalBits;
}

Fixed::Fixed(const float src)
{
	std::cout << "Float constructor called" << std::endl;
    _fixedPointValue = roundf(src * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	_fixedPointValue = src.getRawBits();	
}


Fixed &Fixed::operator=(const Fixed& copy)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &copy)
	{
		_fixedPointValue = copy.getRawBits();
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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
