#include "Brains.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brains::Brains()
{
	std::cout << "Brains default constructor called" << std::endl;
}

Brains::Brains( const Brains & src )
{
	std::cout << "Brain copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brains::~Brains()
{
	std::cout << "Brains destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brains &				Brains::operator=( Brains const & rhs )
{
	*this = rhs;
	return *this;
}
