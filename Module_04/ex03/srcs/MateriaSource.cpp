/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:55:21 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/20 14:13:57 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0 ; i < SRCS_NBR ; i++)
		_srcs[i] = NULL;
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &assign)
{
	for (int i = 0 ; i < SRCS_NBR ; i++)
	{
		if (assign._srcs[i])
			_srcs[i] = assign._srcs[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0 ; i < SRCS_NBR ; i++)
	{
		if (_srcs[i] == NULL)
			_srcs[i] = m->clone();
	}
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0 ; i < SRCS_NBR ; i++)
	{
		if (_srcs[i])
		{
			if (_srcs[i]->getType().compare(type) == 0)
				return (_srcs[i]->clone());
		}
	}
	return (0);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0 ; i < SRCS_NBR ; i++)
	{
		if (_srcs[i])
			delete _srcs[i];
	}
}
