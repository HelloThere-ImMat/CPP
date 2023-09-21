/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:03:13 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/20 15:23:58 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name) : _name(name)
{
	for (size_t i(0); i < INVENTORY_SIZE; ++i)
		_inventory[i] = NULL;
	std::cout << "Characted specified constructor called" << std::endl;
}

Character::Character(const Character &other)
{
	*this = other;
	std::cout << "Characted copy constructor called" << std::endl;
}

Character &Character::operator=(const Character &assign)
{
	_name = assign._name;
	for (size_t i(0); i < INVENTORY_SIZE; ++i)
	{
		delete _inventory[i];
		if (assign._inventory[i])
			_inventory[i] = assign._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	return (*this);
}

const std::string &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0 ; i < INVENTORY_SIZE ; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < INVENTORY_SIZE)
	{
		_dropped_items.push_back(_inventory[idx]);
		_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < INVENTORY_SIZE)
	{
		if (_inventory[idx])
			_inventory[idx]->use(target);
	}
}

Character::~Character()
{
	for (int i = 0 ; i < INVENTORY_SIZE ; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	std::vector<AMateria*>::iterator itt;
	for (itt = _dropped_items.begin() ; itt != _dropped_items.end() ; itt++)
		delete *itt;
	_dropped_items.clear();
	std::cout << "Character destructor called" << std::endl;
}
