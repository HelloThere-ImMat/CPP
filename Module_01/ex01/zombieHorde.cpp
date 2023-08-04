/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 08:50:07 by mat               #+#    #+#             */
/*   Updated: 2023/08/04 08:58:43 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*zH = new Zombie[N];

	for (int i = 0; i < N; i++)
		zH[i].assign_name(name);
	return (zH);
}
