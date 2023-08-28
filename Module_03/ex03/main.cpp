/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:46:52 by mat               #+#    #+#             */
/*   Updated: 2023/08/28 14:13:35 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	ctNb1("Babou");
	ClapTrap	cpyNb1(ctNb1);
	ClapTrap	assigned("Assigned");
	std::cout << std::endl;
	ScavTrap	scav("blata");
	FragTrap	frag("Paul");
	std::cout << std::endl;
	DiamondTrap diams("Fojteparle");
	DiamondTrap cpyNb2(diams);
	DiamondTrap	assigned2("Assigned");
	std::cout << std::endl;
	std::string	target1 = "Dragon";
	std::string target2 = "Mouse";

	ctNb1.attack(target1);
	cpyNb1.attack(target2);
	scav.attack(target1);
	cpyNb1 = assigned;
	cpyNb1.attack(target2);
	frag.highFivesGuys();
	frag.attack(target1);
	diams.attack(target2);
	diams.whoAmI();
	std::cout << std::endl;
	cpyNb2.attack(target1);
	cpyNb2.whoAmI();
	std::cout << std::endl;
	diams = assigned2;
	diams.attack(target1);
	diams.whoAmI();

	return (0);
}
