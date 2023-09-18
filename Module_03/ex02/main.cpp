/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:46:52 by mat               #+#    #+#             */
/*   Updated: 2023/09/18 11:49:42 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	ctNb1("Babou");
	ClapTrap	cpyNb1(ctNb1);
	ClapTrap	assigned("Assigned");
	ScavTrap	scav("blata");
	FragTrap	frag("Paul");
	FragTrap	cpyNb2(frag);
	std::string	target1 = "Dragon";
	std::string target2 = "Mouse";
	std::string targetCpy = "Target of cpy";

	ctNb1.attack(target1);
	cpyNb1.attack(target2);
	scav.attack(target1);
	cpyNb1 = assigned;
	cpyNb1.attack(target2);
	frag.highFivesGuys();
	frag.attack(target1);
	std::cout << std::endl << std::endl;
	cpyNb2.attack(targetCpy);

	return (0);
}
