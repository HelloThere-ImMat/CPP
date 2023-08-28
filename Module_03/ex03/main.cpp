/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:46:52 by mat               #+#    #+#             */
/*   Updated: 2023/08/28 11:19:23 by mdorr            ###   ########.fr       */
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
	std::string	target1 = "Dragon";
	std::string target2 = "Mouse";

	ctNb1.attack(target1);
	cpyNb1.attack(target2);
	scav.attack(target1);
	cpyNb1 = assigned;
	cpyNb1.attack(target2);
	frag.highFivesGuys();
	frag.attack(target1);

	return (0);
}
