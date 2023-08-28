/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:18:58 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/28 11:09:16 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//PUBLIC FUNCTS

void Harl::complain(std::string level)
{
	static void (Harl::*complainFunc[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string level_tab[] = {
		"debug",
		"info",
		"warning",
		"error"
	};
	int	i;

	i = 0;
	while (i <= 3 && level.compare(level_tab[i]) != 0)
		i++;
	if (i > 3)
	{
		std::cout << "Wrong harl setting in main" << std::endl;
		return ;
	}
	(this->*complainFunc[i])();
}

//PRIVATE FUNCTS

void Harl::debug( void )
{
	std::cout << DEBUG_MESSAGE << std::endl;
}

void Harl::info( void )
{
	std::cout << INFO_MESSAGE << std::endl;
}

void Harl::warning( void )
{
	std::cout << WARNING_MESSAGE << std::endl;
}

void Harl::error( void )
{
	std::cout << ERROR_MESSAGE << std::endl;
}

// Constructor

Harl::Harl()
{
}

// Destructor

Harl::~Harl()
{
}