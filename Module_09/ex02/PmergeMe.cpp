/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:20:38 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/13 17:03:30 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


PmergeMe::PmergeMe(const PmergeMe &other)
{
	*this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &assign)
{
	_vec = assign._vec;
	return (*this);
}

//Methods

void	PmergeMe::printContainers()
{
	std::vector<int>::iterator	it;

	for(it = _vec.begin() ; it != _vec.end() ; it++)
		std::cout << "vec : " << *it << std::endl;
}

void	PmergeMe::fillContainers(char **av)
{
	int	i = 0;

	while (av[i + 1])
	{
		int j = 0;
		while (av[i + 1][j])
		{
			if (!isdigit(av[i + 1][j++]))
				throw ("Invalid character found");
		}
		_vec.push_back(strtol(av[i + 1], NULL, 10));
		_list.push_back(strtol(av[i +1], NULL, 10));
		if (errno == ERANGE)
			throw ("Int out of range");
		i++;
	}
}

void	PmergeMe::vecSort()
{
	
}
