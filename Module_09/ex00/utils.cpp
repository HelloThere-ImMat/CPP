/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:36:07 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/09 13:15:04 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	testDate(std::string date)
{
	(void)date;
	return (EXIT_SUCCESS);
}

std::pair<std::string, double>	*exitGetPair(std::pair<std::string, double> *pair, e_pe error, std::string str, double value)
{
	switch (error)
	{
	case e_empty :
		break;
	case e_input :
		std::cout << "Error : bad input => " << str << std::endl;
		break;
	case e_date :
		std::cout << "Error : following date format is incorrect : " << str << std::endl;
		break;
	case e_value :
		if (value < 0)
			std::cout << "Error : not a positive number" << std::endl;
		else if (value > 2147483647)
			std::cout << "Error : too large a number" << std::endl;
		else if (str != "0" && pair->second == 0)
			std::cout << "Error : value is not in float format" << std::endl;
	}
	delete pair;
	return (NULL);
}

std::pair<std::string, double> *getPair(std::string line)
{
	std::pair<std::string, double> 	*pair = new std::pair<std::string, double>;
	std::string						valueStr;

	if (line.empty() == true)
		return (exitGetPair(pair, e_empty, NULL, 0));
	pair->first = line.substr(0, 10);
	if (testDate(pair->first) == EXIT_FAILURE)
		return (exitGetPair(pair, e_date, pair->first, 0));
	try
	{
		valueStr = line.substr(11 , std::string::npos);
	}
	catch(const std::exception& e)
	{
		return (exitGetPair(pair, e_input, line, 0));
	}
	pair->second = atof(valueStr.c_str());
	if ((valueStr != "0" && pair->second == 0) || pair->second < 0 || pair->second > 2147483647)
		return (exitGetPair(pair, e_value, valueStr, pair->second));
	return (pair);
}
