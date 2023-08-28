/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:05:58 by mat               #+#    #+#             */
/*   Updated: 2023/08/28 12:41:15 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class ClapTrap
{
	private :
		std::string _name;
		int			_hitPoint;
		int			_energyPoint;
		int			_attackDamage;
	public :
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &other);
		void attack(std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
