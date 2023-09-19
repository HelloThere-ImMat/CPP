/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:18:15 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/18 13:37:15 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

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

void	Animal::makeSound() const
{
	std::cout << "Miam" << std::endl;
}

const std::string &Animal::getType() const
{
	return (this->_type);
}

Brain	*Animal::get_brain() const
{
	return (this->_brain);
}
