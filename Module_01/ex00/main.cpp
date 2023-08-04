/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 08:20:48 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/04 08:26:02 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombiePtr = newZombie("Zazou");
	randomChump("Ziad");

	delete zombiePtr;
	return (0);
}
