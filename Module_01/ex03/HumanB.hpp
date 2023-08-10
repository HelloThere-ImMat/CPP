/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:50:03 by mat               #+#    #+#             */
/*   Updated: 2023/08/09 19:57:20 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon		*_weaponPTR;
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack(void) const;
		void	setWeapon(Weapon &weapon);
};
