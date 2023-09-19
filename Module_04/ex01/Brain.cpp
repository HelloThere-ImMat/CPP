/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:48:54 by mat               #+#    #+#             */
/*   Updated: 2023/09/18 13:36:27 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Brain copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain&	Brain::operator=(Brain const & rhs)
{
	for (int i = 0;i < 100; i++)
	{
		if (rhs._ideas[i].empty() == false)
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

/*
** --------------------------------- MEM FUNCTS ---------------------------------
*/


const std::string &Brain::getIdeas(int i) const
{
	if (i < 100)
		return (this->_ideas[i]);
	else
		return (this->_ideas[99]);
}

void		Brain::setIdeas(std::string idea, int i)
{
	if (i < 100)
		this->_ideas[i] = idea;
}
