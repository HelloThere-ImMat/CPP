/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:56:07 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/14 18:20:09 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// WRONG ANIMAL

WrongAnimal::WrongAnimal()
{
	this->_type = "generic";
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	this->_type = other._type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Miam" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

// WRONG CAT

WrongCat::WrongCat() : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal()
{
	*this  = other;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	this->_type = other._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Wouaf" << std::endl;
}