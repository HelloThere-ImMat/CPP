/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:50:03 by mat               #+#    #+#             */
/*   Updated: 2023/08/10 14:30:45 by mdorr            ###   ########.fr       */
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
