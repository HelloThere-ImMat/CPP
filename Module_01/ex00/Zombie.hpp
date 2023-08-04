/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 07:53:42 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/04 08:23:51 by mdorr            ###   ########.fr       */
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
		Zombie(std::string name);
		~Zombie(void);
		void announce(void) const;
	private:
		std::string _name;
};

// Prototypes

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif
