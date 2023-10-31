/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:16:20 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/28 16:43:11 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <ctime>
#include <sys/time.h>
#include <algorithm>

#include "Pair.hpp"

class Pair;

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &asssign);
		~PmergeMe() {}
		void	fillContainers(char **av);
		void	printContainers(bool before);
		void	printPairs();
		void	createPairs();
		void	sortMainChain();
		void	sortVec();
		void	sortDeq();
		int		getElementsNb();
	private :
		std::vector<int>	_Jacobsthal;
		std::vector<int>	_JacobRest;
		std::vector<int>	_vec;
		std::deque<int>		_deq;
		std::vector<Pair>	_pairVec;
		std::deque<Pair>	_pairDeq;
		int					_lastJacobUsed;
		int					_elementsNb;
		int					findNextJacobsthal(int i);
		int					binarySearch(int start, int end, int value);
		void				insertInVec(int pairIndex);
		void				insertInDeq(int pairIndex);
};

template <typename T>
void insertInCont(const T<int> cont, int pairIndex)
{
	std::T<int>::iterator bigValue = std::find(cont.begin(), cont.end(), _pairVec[pairIndex]._big);
	int					bValueIndex = std::distance(cont.begin(), bigValue);

	int		pos = this->binarySearch(0, bValueIndex, _pairVec[pairIndex]._small);

	cont.insert(cont.begin() + pos, _pairVec[pairIndex]._small);
}

template <typename T>
void	sortCont(const T<int> cont)
{
	std::T<Pair>::iterator	pIt;
	int						i = 1;
	int						tmpJacob;

	cont.clear();
	for (pIt = _pairVec.begin(); pIt != _pairVec.end(); pIt++)
	{
		if (pIt->_big != -1)
			cont.push_back(pIt->_big);
	}
	cont.insert(cont.begin(), _pairVec[0]._small);
	while (i < static_cast<int>(_pairVec.size()))
	{
		tmpJacob = this->findNextJacobsthal(i);
		if (tmpJacob != -1)
			this->insertInVec(tmpJacob);
		i++;
	}
	if (_JacobRest.empty() == false)
	{
		for (std::vector<int>::iterator jIt = _JacobRest.begin(); jIt != _JacobRest.end(); jIt++)
			insertInCont(cont, *jIt);
	}
}
