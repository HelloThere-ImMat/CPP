/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 18:59:25 by mat               #+#    #+#             */
/*   Updated: 2023/08/26 11:59:25 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoint = 10;
	std::cout << "Calling special constructor\n";
	return ;
}


//ScavTrap::ScavTrap(const ScavpTrap &other) : ScavTrap(other.name)
//{
//	std::cout << "Copy constructor called" << std::endl;
//}

ScavTrap::~ScavTrap()
{
	std::cout << "Calling special destructor\n";
	return ;
}


