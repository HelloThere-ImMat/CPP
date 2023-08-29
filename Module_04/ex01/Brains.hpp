#ifndef BRAINS_HPP
# define BRAINS_HPP

#include "../ex00/WrongAnimal.hpp"

class Brains
{

	public:

		Brains();
		Brains( Brains const & src );
		~Brains();

		Brains &		operator=( Brains const & rhs );

	private:
		std::string ideas[100];
};


#endif /* ********************************************************** BRAINS_H */