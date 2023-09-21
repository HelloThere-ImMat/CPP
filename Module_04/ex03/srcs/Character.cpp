/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:03:13 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/21 14:02:09 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name) : _name(name)
{
	for (int i = 0; i < INVENTORY_SIZE; ++i)
		_inventory[i] = NULL;
	for (int j = 0 ; j < FLOOR_SIZE; j++)
		_dropped_items[j] = NULL;
	std::cout << "Characted specified constructor called" << std::endl;
}

Character::Character(const Character &other)
{
	for (int i = 0 ; i < INVENTORY_SIZE; ++i)
		_inventory[i] = NULL;
	for (int j = 0 ; j < FLOOR_SIZE; j++)
		_dropped_items[j] = NULL;
	std::cout << "Characted copy constructor called" << std::endl;
	*this = other;
}

Character &Character::operator=(const Character &assign)
{
	_name = assign._name;
	for (int i = 0 ; i < INVENTORY_SIZE; ++i)
	{
		if (_inventory[i])
			delete _inventory[i];
		if (assign._inventory[i])
			_inventory[i] = assign._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	for (int j = 0 ; j < FLOOR_SIZE; ++j)
	{
		if (_dropped_items[j])
			delete _dropped_items[j];
		if (assign._dropped_items[j])
			_dropped_items[j] = assign._dropped_items[j]->clone();
		else
			_dropped_items[j] = NULL;
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
		for (int i = 0 ; i < FLOOR_SIZE ; i++)
		{
			if (_dropped_items[i] == NULL)
			{
				_dropped_items[i] = _inventory[idx];
				break ;
			}
		}
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
	for (int j = 0 ; j < FLOOR_SIZE ; j++)
	{
		if (_dropped_items[j])
			delete _dropped_items[j];
	}
	std::cout << "Character destructor called" << std::endl;
}
