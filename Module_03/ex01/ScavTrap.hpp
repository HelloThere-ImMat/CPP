/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:52:04 by mat               #+#    #+#             */
/*   Updated: 2023/08/26 11:58:53 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public :
		ScavTrap(std::string name);
		//ScavTrap(ScavTrap &other);
		~ScavTrap();
		std::string get_lifepoints(void);
	private :
		std::string _name;

};
