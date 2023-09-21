/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:56:03 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/21 13:54:10 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"

# define INVENTORY_SIZE 4
# define FLOOR_SIZE		8

class Character : public ICharacter
{
	private :
		std::string _name;
		AMateria *_inventory[INVENTORY_SIZE];
		AMateria *_dropped_items[FLOOR_SIZE];
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
