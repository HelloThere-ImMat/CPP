/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:36:47 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/13 13:20:02 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

int main(int argc, char **argv)
{
	RPN	weirdCalculator;

	if (argc != 2)
	{
		std::cout << "This program take a single argument" << std::endl;
		return (1);
	}
	try
	{
	 	weirdCalculator.fillstacks(argv[1]);
		// weirdCalculator.printStack();
		weirdCalculator.displaySolution();
	}
	catch(char const *e)
	{
		std::cerr << "Error : " << e << std::endl;
	}
	return (0);
}
