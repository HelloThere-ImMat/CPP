/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:18:15 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/05 14:52:15 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

// Animal

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
	this->_type = other._type;
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

std::string Animal::getType() const
{
	return (this->_type);
}

Brain	*Animal::getBrain(void) const
{
	return (this->_brain);
}

// Dog

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
	this->_brain = new Brain;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal()
{
	this->_type = other._type;
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain(*other._brain);
}

Dog &Dog::operator=(const Dog &other)
{
	this->_type = other._type;
	delete this->_brain;
	this->_brain = new Brain(*other._brain);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Wouaf" << std::endl;
}

// Cat

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
	this->_brain = new Brain;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal()
{
	this->_type = other._type;
	this->_brain = other.getBrain();
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	this->_type = other._type;
	this->_brain = other._brain;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}
