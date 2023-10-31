/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:16:20 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/31 11:32:30 by mdorr            ###   ########.fr       */
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
#include <errno.h>

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
