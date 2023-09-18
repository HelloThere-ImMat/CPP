/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 18:59:25 by mat               #+#    #+#             */
/*   Updated: 2023/09/18 11:23:18 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructor

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

// Destructor

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

// Operator

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	this->_name = other._name;
	return (*this);
}

// Member Functs

void	ScavTrap::attack(std::string &target)
{
	if (this->_hitPoint && this->_energyPoint)
	{
		this->_energyPoint--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	if (this->_hitPoint && this->_energyPoint)
		std::cout << "ScavTrap named : " << this->_name << "entered gate keeper mode" << std::endl;
}