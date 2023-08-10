/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 07:53:42 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/05 11:41:36 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
# define	ZOMBIE_HPP

#include <iostream>
#include <string>

// Class

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		~Zombie(void);
		void announce(void) const;
};

// Prototypes

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif
