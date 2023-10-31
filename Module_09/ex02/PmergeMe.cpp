/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:20:38 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/28 16:40:52 by mdorr            ###   ########.fr       */
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

// void PmergeMe::insertInVec(int pairIndex)
// {
// 	std::vector<int>::iterator bigValue = std::find(_vec.begin(), _vec.end(), _pairVec[pairIndex]._big);
// 	int					bValueIndex = std::distance(_vec.begin(), bigValue);

// 	int		pos = this->binarySearch(0, bValueIndex, _pairVec[pairIndex]._small);

// 	_vec.insert(_vec.begin() + pos, _pairVec[pairIndex]._small);
// }

// void PmergeMe::insertInDeq(int pairIndex)
// {
// 	std::deque<int>::iterator bigValue = std::find(_deq.begin(), _deq.end(), _pairDeq[pairIndex]._big);
// 	int					bValueIndex = std::distance(_deq.begin(), bigValue);

// 	int		pos = this->binarySearch(0, bValueIndex, _pairDeq[pairIndex]._small);

// 	_deq.insert(_deq.begin() + pos, _pairDeq[pairIndex]._small);
// }

//returns the index where the value should be inserted
int PmergeMe::binarySearch(int start, int end, int value)
{
	int step = end - start;
	int	middle = start + step / 2;

	if (value == _vec[middle])
		return (middle);
	else if (value < _vec[middle])
	{
		if (step > 1)
			return (this->binarySearch(start, middle - 1, value));
		else
			return (start);
	}
	else if (value > _vec[middle])
	{
		if (step > 0)
			return (this->binarySearch(middle + 1, end, value));
		else
			return (end + 1);
	}
	return (-1);
}

	//PUBLIC

		//DEBUG

void	PmergeMe::printContainers(bool before)
{
	std::vector<int>::iterator	it;

	if (before)
		std::cout << "Before: ";
	else
		std::cout << "After: ";
	for(it = _vec.begin() ; it != _vec.end() ; it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::printPairs()
{
	std::vector<Pair>::iterator it;
	int					i = 0;

	for (it = _pairVec.begin(); it != _pairVec.end(); it++)
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
	_elementsNb = _vec.size();
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

// void PmergeMe::sortVec()
// {
// 	std::vector<Pair>::iterator pIt;
// 	int							i = 1;
// 	int							tmpJacob;

// 	_vec.clear();
// 	for (pIt = _pairVec.begin(); pIt != _pairVec.end(); pIt++)
// 	{
// 		if (pIt->_big != -1)
// 			_vec.push_back(pIt->_big);
// 	}
// 	_vec.insert(_vec.begin(), _pairVec[0]._small);
// 	while (i < static_cast<int>(_pairVec.size()))
// 	{
// 		tmpJacob = this->findNextJacobsthal(i);
// 		if (tmpJacob != -1)
// 			this->insertInVec(tmpJacob);
// 		i++;
// 	}
// 	if (_JacobRest.empty() == false)
// 	{
// 		for (std::vector<int>::iterator jIt = _JacobRest.begin(); jIt != _JacobRest.end(); jIt++)
// 			this->insertInVec(*jIt);
// 	}
// };

// void PmergeMe::sortDeq()
// {
// 	std::deque<Pair>::iterator pIt;
// 	int							i = 1;
// 	int							tmpJacob;

// 	_deq.clear();
// 	for (pIt = _pairDeq.begin(); pIt != _pairDeq.end(); pIt++)
// 	{
// 		if (pIt->_big != -1)
// 			_deq.push_back(pIt->_big);
// 	}
// 	_deq.insert(_deq.begin(), _pairDeq[0]._small);
// 	while (i < static_cast<int>(_pairDeq.size()))
// 	{
// 		tmpJacob = this->findNextJacobsthal(i);
// 		if (tmpJacob != -1)
// 			this->insertInDeq(tmpJacob);
// 		i++;
// 	}
// 	if (_JacobRest.empty() == false)
// 	{
// 		for (std::vector<int>::iterator jIt = _JacobRest.begin(); jIt != _JacobRest.end(); jIt++)
// 			this->insertInDeq(*jIt);
// 	}
// }

		//GETTER

int	PmergeMe::getElementsNb()
{
	return (_elementsNb);
}
