/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:39:33 by mat               #+#    #+#             */
/*   Updated: 2023/08/09 19:56:38 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weaponPTR(&weaponREF)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with their " << this->_weaponREF->getType();
	std::cout << std::endl;
}
