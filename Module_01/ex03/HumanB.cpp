/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:49:46 by mat               #+#    #+#             */
/*   Updated: 2023/08/09 20:00:43 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weaponPTR = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::attack() const
{
	std::cout << this->_name << " attacks with their " << this->_weaponPTR->getType();
	std::cout << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weaponPTR = &weapon;
}
