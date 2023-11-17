/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:20:57 by mdorr             #+#    #+#             */
/*   Updated: 2023/11/17 11:16:00 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

time_t	getTime()
{
	struct timeval tv;

	gettimeofday(&tv, NULL);
	return (tv.tv_usec);
}

int main(int argc, char **argv)
{
	PmergeMe				pmm;
	std::time_t				tStart;
	std::time_t				tMid;
	std::time_t				tVec;
	std::time_t				tDeq;


	if (argc < 2)
	{
		std::cerr << "Error: This program take a minimum of 1 argument" << std::endl;
		return (1);
	}
	try
	{
		pmm.fillContainers(argv);

		pmm.printContainers(true);
		tStart = getTime();
		pmm.createPairs();
		pmm.sortMainChain();
		tMid = getTime() - tStart;
		pmm.sortVec();
		tVec = getTime() - tStart;
		pmm.sortDeq();
		pmm.printContainers(false);
		tDeq = getTime() - tStart - tVec + tMid;
		std::cout << "Time to process a range of " << pmm.getElementsNb() << " elements with std::vector : " << tVec << " us" << std::endl;
		std::cout << "Time to process a range of " << pmm.getElementsNb() << " elements with std::deque : " << tDeq << " us" << std::endl;
	}
	catch (const char *e_message)
	{
		std::cerr << "Error: " << e_message << std::endl;
	}
	return (0);
}
