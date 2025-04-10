/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:31:35 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/10 15:25:13 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionnalBits = 8;

Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
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
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointValue); 
}

void Fixed::setRawBits(int const raw)
{
	_fixedPointValue = raw;
}
