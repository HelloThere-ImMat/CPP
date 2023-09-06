/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:48:54 by mat               #+#    #+#             */
/*   Updated: 2023/09/06 13:21:31 by mat              ###   ########.fr       */
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


std::string Brain::getIdeas(int i) const
{
	return (this->_ideas[i]);
}

void		Brain::setIdeas(std::string idea, int i)
{
	this->_ideas[i] = idea;
}
