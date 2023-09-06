/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:46:52 by mat               #+#    #+#             */
/*   Updated: 2023/09/05 14:55:11 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	cpNb1("Babou");
	ClapTrap	victim("Julien");
	ClapTrap	assign("lva");

	cpNb1.attack((std::string)"Target");
	assign.attack((std::string)"Target");
	assign = cpNb1;
	assign.attack((std::string)"Target");
	return (0);
}
