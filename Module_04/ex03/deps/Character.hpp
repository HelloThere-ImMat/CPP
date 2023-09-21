/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:56:03 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/20 14:50:42 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include <vector>

# define INVENTORY_SIZE 4

class Character : public ICharacter
{
	private :
		std::string _name;
		AMateria *_inventory[INVENTORY_SIZE];
		std::vector<AMateria*> _dropped_items;
	public:
			Character(const std::string &name);
			Character(const Character &other);
			Character& operator=(const Character &assign);
			std::string const & getName() const;
			void equip(AMateria* m);
			void unequip(int idx);
			void use(int idx, ICharacter& target);
			~Character();
};

