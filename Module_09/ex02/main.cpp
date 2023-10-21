/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:20:57 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/21 15:10:38 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	PmergeMe				pmm;
	// std::time_t				tStart;
	// std::time_t				tVec;
	// std::time_t				tList;
	(void)argc;

	try
	{
		pmm.fillContainers(argv);
		std::cout << "---------PRINTING CONTAINERS------------ " << std::endl;
		pmm.printContainers();
		// tStart = std::time(NULL);
		pmm.createPairs();
		std::cout << "-----------PRINTING PAIRS---------------- " << std::endl;
		pmm.printPairs();
		pmm.sortMainChain();
		std::cout << "---------AFTER SORT MAIN CHAIN-----------" << std::endl;
		pmm.printPairs();
		pmm.sortVec();
	}
	catch (const char *e_message)
	{
		std::cout << "Error : " << e_message << std::endl;
	}
	return (0);
}
