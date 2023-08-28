/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:15:16 by mat               #+#    #+#             */
/*   Updated: 2023/08/28 13:16:12 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Constructor

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _hitPoint(other._hitPoint), _energyPoint(other._energyPoint), _attackDamage(other._attackDamage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

//Destructor

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

// Operator Overload

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this->_name = other._name;
	return (*this);
}

// Member functs

void ClapTrap::attack(std::string &target)
{
	if (this->_hitPoint && this->_energyPoint)
	{
		this->_energyPoint--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoint > 0)
		this->_hitPoint += amount;
	this->_energyPoint--;
}
