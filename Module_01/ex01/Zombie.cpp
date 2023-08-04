/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 07:57:10 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/04 08:57:11 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructor

Zombie::Zombie()
{
	return ;
}

// Destructor

Zombie::~Zombie()
{
	std::cout << "Zombie named " << this->_name << " got destroyed" << std::endl;
}

// Member funct

void	Zombie::announce( void ) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::assign_name(std::string name)
{
	this->_name = name;
}
