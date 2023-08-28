/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:05:58 by mat               #+#    #+#             */
/*   Updated: 2023/08/26 15:14:46 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
	public :
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &other);
		void 	takeDamage(unsigned int amount);
		void 	beRepaired(unsigned int amount);
		virtual void 	attack(std::string &target);
	protected :
		std::string _name;
		int			_hitPoint;
		int			_energyPoint;
		int			_attackDamage;
};
