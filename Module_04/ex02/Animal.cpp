/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:22:31 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/21 13:51:05 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "generic";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	this->_type = other._type;
	return (*this);
}

const std::string &Animal::getType() const
{
	return (this->_type);
}
