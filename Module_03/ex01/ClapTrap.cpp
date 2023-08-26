/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:15:16 by mat               #+#    #+#             */
/*   Updated: 2023/08/23 17:51:08 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Constructor

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _hitPoint(other._hitPoint), _energyPoint(other._energyPoint), _attackDamage(other._attackDamage)
{
	std::cout << "Copy constructor called" << std::endl;
}

//Destructor

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

// Member functs

void ClapTrap::attack(ClapTrap& target)
{
	if (this->_hitPoint > 0 && this->_energyPoint > 0)
		target.takeDamage(this->_attackDamage);
	this->_energyPoint--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target._name 
		<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
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
