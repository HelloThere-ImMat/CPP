/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:46:52 by mat               #+#    #+#             */
/*   Updated: 2023/08/26 14:55:47 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	cpNb1("Babou");
	ClapTrap	victim("Julien");
	ClapTrap	assign("lva");

	cpNb1.attack(victim);
	assign.attack(victim);
	assign = cpNb1;
	assign.attack(victim);
	return (0);
}
