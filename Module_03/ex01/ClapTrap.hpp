/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:05:58 by mat               #+#    #+#             */
/*   Updated: 2023/08/26 11:55:40 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
	public :
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		~ClapTrap();
		void attack(ClapTrap& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private :
		std::string _name;
		int			_hitPoint;
		int			_energyPoint;
		int			_attackDamage;
};
