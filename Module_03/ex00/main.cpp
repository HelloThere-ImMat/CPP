/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:46:52 by mat               #+#    #+#             */
/*   Updated: 2023/09/06 13:06:04 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	cpNb1("Babou");
	ClapTrap	victim("Julien");
	ClapTrap	assign("lva");
	std::string targ = "dragon";

	cpNb1.attack(targ);
	assign.attack(targ);
	assign = cpNb1;
	assign.attack(targ);
	return (0);
}
