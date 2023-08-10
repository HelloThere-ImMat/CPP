/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:36:48 by mat               #+#    #+#             */
/*   Updated: 2023/08/09 19:57:02 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_name;
		Weapon		*_weaponREF;
	public:
		HumanA(std::string name, Weapon &weaponREF);
		~HumanA();
		void	attack(void) const;
};
