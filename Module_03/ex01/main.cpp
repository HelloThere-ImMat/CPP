/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:46:52 by mat               #+#    #+#             */
/*   Updated: 2023/08/28 11:13:35 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	ctNb1("Babou");
	ClapTrap	cpyNb1(ctNb1);
	ClapTrap	assigned("Assigned");
	ScavTrap	scav("blata");
	std::string	target1 = "Dragon";
	std::string target2 = "Mouse";

	ctNb1.attack(target1);
	cpyNb1.attack(target2);
	scav.attack(target1);
	cpyNb1 = assigned;
	cpyNb1.attack(target2);
	scav.guardGate();

	return (0);
}
