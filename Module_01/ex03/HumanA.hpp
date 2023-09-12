/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:36:48 by mat               #+#    #+#             */
/*   Updated: 2023/09/12 11:44:29 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_name;
		Weapon		&_weaponREF;
	public:
		HumanA(std::string name, Weapon &weaponREF);
		~HumanA();
		void	attack(void) const;
};
