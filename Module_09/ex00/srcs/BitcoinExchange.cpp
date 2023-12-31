/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:41:24 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/31 14:01:06 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	*this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &assign)
{
	_btcIndex = assign._btcIndex;
	return (*this);
}

//MEMBER FUNCTS
//		PRIVATE

std::pair<std::string, double> *BitcoinExchange::getPair(std::string line)
{
	std::pair<std::string, double> 	*pair = new std::pair<std::string, double>;
	std::string						valueStr;

	if (line.empty() == true)
	{
		delete pair;
		return (NULL);
	}
	pair->first = line.substr(0, 10);
	valueStr = line.substr(11 , std::string::npos);
	pair->second = atof(valueStr.c_str());
	return (pair);
}

int BitcoinExchange::fillMap(std::ifstream &file)
{
	std::string	line;
	std::pair<std::string, double> *p;
	std::getline(file, line);
	while (file.eof() == false)
	{
		std::getline(file, line);
		if (!line.empty())
		{
			p = getPair(line);
			if (p)
				_btcIndex.insert(*p);
		}

	}
	return (EXIT_SUCCESS);
}

int	BitcoinExchange::getDb()
{
	std::ifstream	db(DATABASE_PATH, std::ifstream::in);

	if (!db)
	{
		std::cout << "Error : cannot open database file" << std::endl;
		return (EXIT_FAILURE);
	}
	this->fillMap(db);
	return (EXIT_SUCCESS);
}

void	BitcoinExchange::printMessage(std::string date, double value)
{
	std::map<std::string, double>::iterator	node;
	std::string 							newDate;

	node = _btcIndex.find(date);
	if (node == _btcIndex.end())
		node = _btcIndex.find(findClosestKey(_btcIndex, date));

	std::cout << date << " => " << value << " = " << node->second * value << std::endl;
}


//		PUBLIC

int	BitcoinExchange::BtcCalculator(std::ifstream &input)
{
	if (this->getDb() == EXIT_FAILURE)
		return (EXIT_FAILURE);

	std::string	line;
	std::string	date;
	double		value;

	std::getline(input, line);
	while (input.eof() == false)
	{
		std::getline(input, line);
		if (line.size() < 10)
			printError(e_input, line, 0);
		else if (!line.empty())
		{
			if (testDate(line.substr(0, 10), &date) == EXIT_SUCCESS &&
				testValue(line, &value) == EXIT_SUCCESS)
				this->printMessage(date, value);
		}
	}
	return (EXIT_SUCCESS);
}


std::map<std::string, double>	&BitcoinExchange::getBtcIndex(void)
{
	return (_btcIndex);
}


//DESTRUCTOR

BitcoinExchange::~BitcoinExchange()
{
}
