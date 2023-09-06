#include "Brains.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain & src)
{
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = src.ideas[i];
		i++;
	}
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
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}
