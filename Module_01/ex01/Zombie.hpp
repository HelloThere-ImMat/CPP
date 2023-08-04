/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 07:53:42 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/04 08:57:20 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
# define	ZOMBIE_HPP

#include <iostream>
#include <string>

// Class

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void announce(void) const;
		void assign_name(std::string name);
	private:
		std::string _name;
};

// Prototypes

Zombie*	zombieHorde( int N, std::string name );

#endif
