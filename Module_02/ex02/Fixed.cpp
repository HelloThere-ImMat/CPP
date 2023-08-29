/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:08:20 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/29 18:53:58 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructor

Fixed::Fixed() : _fixedNb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// Copy Constructor

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int integer)
{
	this->_fixedNb = integer << 8;
}

Fixed::Fixed(const float floating_pt)
{
	this->_fixedNb = floating_pt * pow(2, this->_bitNb);
}

// Operators Overload

Fixed& Fixed::operator= (const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_fixedNb = other._fixedNb;
	return (*this);
}

std::ostream& operator<<(std::ostream &os, const Fixed &other)
{
	os << other.toFloat();
	return (os);
}

// Destructor

Fixed::~Fixed()
{
	std::cout << "Fixed destructor called" << std::endl;
}

//Public Functs

int	Fixed::getRawBits (void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedNb);
}

void	Fixed::setRawBits (int const raw)
{
	this->_fixedNb = raw;
}

float	Fixed::toFloat(void) const
{
	return (this->_fixedNb / pow(2, this->_bitNb));
}

int		Fixed::toInt(void) const
{
	return (this->_fixedNb >> 8);
}


const int Fixed::_bitNb = 8;