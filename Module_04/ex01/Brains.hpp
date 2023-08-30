#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();
		Brain &		operator=( Brain const & rhs );

	private:
		std::string ideas[100];
};


#endif /* ********************************************************** BRAINS_H */