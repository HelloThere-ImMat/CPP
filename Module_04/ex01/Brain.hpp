#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	public :
		Brain();
		~Brain();
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
		const std::string &getIdeas(int i) const;
		void		setIdeas(std::string idea, int i);
	private :
		std::string _ideas[100];
};

#endif
