/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:29:38 by mat               #+#    #+#             */
/*   Updated: 2023/08/05 11:47:03 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	private : 
		std::string	_type;
	public :
		Weapon(std::string type);
		~Weapon();
		void		setType(std::string type);
		std::string	getType(void) const;
};

#endif
