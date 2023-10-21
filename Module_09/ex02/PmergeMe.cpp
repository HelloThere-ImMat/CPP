/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:20:38 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/21 15:39:54 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	_Jacobsthal.push_back(0);
	_Jacobsthal.push_back(1);
	_Jacobsthal.push_back(3);
	_Jacobsthal.push_back(5);
	_Jacobsthal.push_back(11);
	_Jacobsthal.push_back(21);
	_Jacobsthal.push_back(43);
	_Jacobsthal.push_back(85);
	_Jacobsthal.push_back(171);
	_Jacobsthal.push_back(341);
	_Jacobsthal.push_back(683);
	_Jacobsthal.push_back(1365);
	_Jacobsthal.push_back(2731);
	_Jacobsthal.push_back(5461);
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	*this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &assign)
{
	_Jacobsthal = assign._Jacobsthal;
	_vec = assign._vec;
	_deq = assign._deq;
	_pairVec = assign._pairVec;
	_pairDeq = assign._pairDeq;
	return (*this);
}

//Methods

	//PRIVATE

int PmergeMe::findNextJacobsthal(int i)
{
	int	tmpJacob = _Jacobsthal[0];

	if (tmpJacob == i)
	{
		_lastJacobUsed = i;
		_Jacobsthal.erase(_Jacobsthal.begin());
		return (i);
	}
	else if (_JacobRest.empty() == false && _JacobRest[0] < _lastJacobUsed)
	{
		int ret = _JacobRest[0];
		_JacobRest.erase(_JacobRest.begin());
		_JacobRest.push_back(i);
		return (ret);
	}
	else if (tmpJacob != i)
		_JacobRest.push_back(i);
	return (-1);
}

void PmergeMe::insertInVec(int pairIndex)
{
	int		pos = this->binarySearch(_pairVec[pairIndex]._small);

	_vec.insert(_vec.begin() + pos, _pairVec[pairIndex]._small);
}

//returns the index where the value should be inserted
int PmergeMe::binarySearch(int value)
{
	
}

	//PUBLIC

		//DEBUG

void	PmergeMe::printContainers()
{
	std::vector<int>::iterator	it;

	for(it = _vec.begin() ; it != _vec.end() ; it++)
		std::cout << "vec : " << *it << std::endl;
}

void	PmergeMe::printPairs()
{
	std::deque<Pair>::iterator it;
	int					i = 0;

	for (it = _pairDeq.begin(); it != _pairDeq.end(); it++)
	{
		std::cout << "Printing pair nb " << i << std::endl;
		std::cout << "small : " << it->_small << " - big : " << it->_big << std::endl;
		i++;
	}
}

		//FILL AND SORT

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
		_deq.push_back(strtol(av[i + 1], NULL, 10));
		if (errno == ERANGE)
			throw ("Int out of range");
		i++;
	}
}

void	PmergeMe::createPairs()
{
	int		size = _vec.size();
	int		i = 0;
	Pair	tmp;

	while (i < size)
	{
		tmp._small = _vec[i];
		i++;
		if (i < size)
			tmp._big = _vec[i];
		else
			tmp._big = -1;
		if (tmp._big != -1 && tmp._big < tmp._small)
			std::swap(tmp._big, tmp._small);
		_pairVec.push_back(tmp);
		_pairDeq.push_back(tmp);
		i++;
	}
}

void PmergeMe::sortMainChain()
{
	std::sort(_pairVec.begin(), _pairVec.end());
	std::sort(_pairDeq.begin(), _pairDeq.end());
}

void PmergeMe::sortVec()
{
	std::vector<Pair>::iterator pIt;
	int							elementsNb = _vec.size();
	int							i = 0;
	int							tmpJacob;

	_vec.clear();
	for (pIt = _pairVec.begin(); pIt != _pairVec.end(); pIt++)
	{
		if (pIt->_big != -1)
			_vec.push_back(pIt->_big);
		else
			_vec.insert(_vec.begin(), pIt->_small);
	}
	std::cout << "----------STARTING POINT------------" << std::endl;
	this->printContainers();
	std::cout << "PRINTING JACOB INDEXES" << std::endl;
	while (i < elementsNb)
	{
		tmpJacob = this->findNextJacobsthal(i);
		if (tmpJacob != -1)
			this->insertInVec(tmpJacob);
		i++;
	}
	if (_JacobRest.empty() == false)
	{
		for (std::vector<int>::iterator jIt = _JacobRest.begin(); jIt != _JacobRest.end(); jIt++)
			this->insertInVec(*jIt);
	}
};


