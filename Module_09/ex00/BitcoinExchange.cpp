/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:41:24 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/09 12:53:30 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::cout << "BitcoinExchange default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	*this = other;
	std::cout << "BitcoinExchange copy constructor called" << std::endl;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &assign)
{
	_btcIndex = assign._btcIndex;
	return (*this);
}

int BitcoinExchange::fillMap(std::ifstream &file)
{
	std::string	line;
	std::pair<std::string, double> *tmp;
	(void)tmp;
	std::getline(file, line);
	while (file.eof() == false)
	{
		std::getline(file, line);
		tmp = getPair(line);

	}
	std::cout << "finished fill map" << std::endl;
	return (EXIT_SUCCESS);
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "BitcoinExchange default destructor called" << std::endl;
}


