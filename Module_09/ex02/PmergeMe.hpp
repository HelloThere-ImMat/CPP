/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:16:20 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/21 15:36:52 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <ctime>
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
		void	printContainers();
		void	printPairs();
		void	createPairs();
		void	sortMainChain();
		void	sortVec();
	private :
		std::vector<int>	_Jacobsthal;
		std::vector<int>	_JacobRest;
		std::vector<int>	_vec;
		std::deque<int>		_deq;
		std::vector<Pair>	_pairVec;
		std::deque<Pair>	_pairDeq;
		int					_lastJacobUsed;
		int					findNextJacobsthal(int i);
		int					binarySearch(int value);
		void				insertInVec(int pairIndex);
};
