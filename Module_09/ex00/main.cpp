/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:47:28 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/09 13:13:15 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		std::cout << "This program take a single argument, the name of the database file" << std::endl;
		return (EXIT_FAILURE);
	}

	BitcoinExchange bla;
	std::ifstream	file(argv[1], std::ifstream::in);
	if (!file)
	{
		std::cout << "Error : cannot open file" << std::endl;
		return (EXIT_FAILURE);
	}
	bla.fillMap(file);
}
