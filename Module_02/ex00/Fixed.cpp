/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:08:20 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/14 16:24:01 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

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

// Operators Overload

Fixed& Fixed::operator= (const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_fixedNb = other._fixedNb;
	return (*this);
}

// Destructor

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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


const int Fixed::_bitNb = 8;