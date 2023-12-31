/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:49:46 by mat               #+#    #+#             */
/*   Updated: 2023/09/11 16:15:02 by mdorr            ###   ########.fr       */
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
	if (this->_weaponPTR)
	{
		std::cout << this->_name << " attacks with their " << this->_weaponPTR->getType();
		std::cout << std::endl;
	}
	else
		std::cout << this->_name << " cannot attack" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weaponPTR = &weapon;
}
