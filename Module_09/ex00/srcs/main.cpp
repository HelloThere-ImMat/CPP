/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:47:28 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/09 22:39:30 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void printmap(BitcoinExchange &bla)
{
	std::map<std::string, double>::iterator	it;

	for (it = bla.getBtcIndex().begin(); it != bla.getBtcIndex().end(); it++)
		std::cout << "date : " << it->first << " value : " << it->second << std::endl;

}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		BitcoinExchange WallStreet;
		std::ifstream	input(argv[1], std::ifstream::in);

		if (!input)
		{
			std::cout << "Error : cannot open input file" << std::endl;
			return (EXIT_FAILURE);
		}
		return (WallStreet.BtcCalculator(input));
	}
	else {
		std::cout << "Wrong number of arguments" << std::endl;
		std::cout << "This program take a single argument, the name of the database file" << std::endl;
		return (EXIT_FAILURE);
	}
}
