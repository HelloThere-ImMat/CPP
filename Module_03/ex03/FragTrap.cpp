/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 18:59:25 by mat               #+#    #+#             */
/*   Updated: 2023/09/18 11:50:30 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructor

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::FragTrap() : ClapTrap("Empty")
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap empty constructor called" << std::endl;
}

// Destructor

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

// Operator

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	this->_name = other._name;
	return (*this);
}

// Member Functs

void	FragTrap::attack(std::string &target)
{
	if (this->_hitPoint && this->_energyPoint)
	{
		this->_energyPoint--;
		std::cout << "FragTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_hitPoint && this->_energyPoint)
		std::cout << this->_name << ": Do you guys want to high fives ?" << std::endl;
}