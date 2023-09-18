/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:39:13 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/18 12:22:00 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Constructor

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	this->_name = name;
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energyPoint = ScavTrap::_energyPoint;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap default constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(), FragTrap()
{
	*this = other;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

// Destructor

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
	return ;
}

// Operator

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	this->_name = other._name;
	this->ClapTrap::_name = other.ClapTrap::_name;
	this->_energyPoint = other._energyPoint;
	this->_attackDamage = other._attackDamage;
	this->_hitPoint = other._hitPoint;
	return (*this);
}

// Member Functs

void 	DiamondTrap::attack(std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is : " << this->_name << " and my base name is : " << this->ClapTrap::_name << std::endl;
}