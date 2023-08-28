/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:42:52 by mat               #+#    #+#             */
/*   Updated: 2023/08/28 11:03:13 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int getPriorityIndex(std::string str)
{
	std::string	mods[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i; i < 4; i++)
	{
		if (str.compare(mods[i]) == 0)
			return (i);
	}
	return (4);
}

int main(int ac, char **av)
{
	Harl 		h1;
	std::string	str;
	int			index;

	if (ac == 2)
	{
		str = av[1];
		index = getPriorityIndex(str);
		switch (index)
		{
			case 0 :
				h1.complain("DEBUG");
				break ;
			case 1 :
				h1.complain("INFO");
				break ;
			case 2 :
				h1.complain("WARNING");
				break ;
			case 3 :
				h1.complain("ERROR");
				break ;
			case 4 :
				std::cout << "I don't recognize this mode" << std::endl;
				break ;
		}
	}
	else
		std::cerr << "Error" << std::endl << "This program take a single argument" << std::endl;
	return (0);
}
