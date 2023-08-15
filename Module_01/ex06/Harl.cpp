/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:18:58 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/15 12:15:37 by mat              ###   ########.fr       */
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
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	int	i;

	i = 0;
	while (level.compare(level_tab[i]) != 0)
		i++;
	(this->*complainFunc[i])();
}

//PRIVATE FUNCTS

void Harl::debug( void )
{
	std::cout << DEBUG_MESSAGE << std::endl;
	this->complain("INFO");
}

void Harl::info( void )
{
	std::cout << INFO_MESSAGE << std::endl;
	this->complain("WARNING");
}

void Harl::warning( void )
{
	std::cout << WARNING_MESSAGE << std::endl;
	this->complain("ERROR");
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
