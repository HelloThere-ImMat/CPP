/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:08:20 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/14 16:25:19 by mdorr            ###   ########.fr       */
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
	this->_fixedNb = roundf(floating_pt * pow(2, this->_bitNb));
}

// Operators Overload

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_fixedNb = other._fixedNb;
	return (*this);
}


Fixed Fixed::operator+(const Fixed &other) const
{
	float f1;
	float f2;
	float f3;

	f1 = this->toFloat();
	f2 = other.toFloat();
	f3 = f1 + f2;
	return (Fixed(f3));
}

Fixed Fixed::operator-(const Fixed &other) const
{
	float f1;
	float f2;
	float f3;

	f1 = this->toFloat();
	f2 = other.toFloat();
	f3 = f1 - f2;
	return (Fixed(f3));
}

Fixed Fixed::operator/(const Fixed &other) const
{
	float f1;
	float f2;
	float f3;

	f1 = this->toFloat();
	f2 = other.toFloat();
	f3 = f1 / f2;
	return (Fixed(f3));
}

Fixed Fixed::operator*(const Fixed &other) const
{
	float f1;
	float f2;
	float f3;

	f1 = this->toFloat();
	f2 = other.toFloat();
	f3 = f1 * f2;
	return (Fixed(f3));
}

bool Fixed::operator<(const Fixed &other) const
{
	float f1;
	float f2;

	f1 = this->toFloat();
	f2 = other.toFloat();
	if (f1 < f2)
		return (true);
	return (false);
}

bool Fixed::operator>(const Fixed &other) const
{
	float f1;
	float f2;

	f1 = this->toFloat();
	f2 = other.toFloat();
	if (f1 > f2)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed &other) const
{
	float f1;
	float f2;

	f1 = this->toFloat();
	f2 = other.toFloat();
	if (f1 <= f2)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed &other) const
{
	float f1;
	float f2;

	f1 = this->toFloat();
	f2 = other.toFloat();
	if (f1 >= f2)
		return (true);
	return (false);
}

bool Fixed::operator==(Fixed &other)
{
	if (this->_fixedNb == other._fixedNb)
		return (true);
	return (false);
}

bool Fixed::operator!=(Fixed &other)
{
	if (this->_fixedNb == other._fixedNb)
		return (false);
	return (true);
}

void Fixed::operator++()
{
	++(this->_fixedNb);
}

void Fixed::operator++(int)
{
	(this->_fixedNb)++;
}

void Fixed::operator--()
{
	--(this->_fixedNb);
}

void Fixed::operator--(int)
{
	(this->_fixedNb)--;
}

std::ostream& operator<<(std::ostream &os, const Fixed &other)
{
	os << other.toFloat();
	return (os);
}

// Destructor

Fixed::~Fixed()
{
	std::cout << "Destructor called for " << this->toInt() << std::endl;
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
	return (this->_fixedNb >> _bitNb);
}

Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 <= f2)
		return (f1);
	return (f2);
}

const Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 <= f2)
		return (f1);
	return (f2);
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 >= f2)
		return (f1);
	return (f2);
}

const Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 >= f2)
		return (f1);
	return (f2);
}

const int Fixed::_bitNb = 8;
