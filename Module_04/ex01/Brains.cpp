#include "Brains.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brains::Brains()
{
}

Brains::Brains( const Brains & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brains::~Brains()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brains &				Brains::operator=( Brains const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Brains const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */