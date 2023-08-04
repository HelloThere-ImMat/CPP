/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 07:57:10 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/04 08:29:30 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructor

Zombie::Zombie(std::string name) : _name(name)
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
