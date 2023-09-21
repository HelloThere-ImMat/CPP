/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:21:25 by mat               #+#    #+#             */
/*   Updated: 2023/09/21 13:51:41 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	*this= other;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	this->_type = other._type;
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*(other._brain));
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}

Brain	*Cat::get_brain() const
{
	return (this->_brain);
}
