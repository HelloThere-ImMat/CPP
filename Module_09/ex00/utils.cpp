/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:36:07 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/09 23:42:56 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool isLeap(int year) 
{
	return (((year % 4 == 0) && (year % 100 != 0)))
	|| (year % 400 == 0);
}

bool isValidDate(s_date date)
{
	//BTC and current years
	if (date.year > 2023 ||
		date.year < 1970)
		return false;
	//Months and days maximums
	if (date.month < 1 || date.month > 12)
		return false;
	if (date.day < 1 || date.day > 31)
		return false;
	// February month
	if (date.month == 2)
	{ 
		if (isLeap(date.year))
			return (date.day <= 29);
		else
			return (date.day <= 28);
	}
	//30 days months
	if (date.month == 4 || date.month == 6 ||
		date.month == 9 || date.month == 11)
		return (date.day <= 30);
	return true;
}

bool	dateAfterBtc(s_date &date)
{
	if (date.year < 2009 && date.month < 10 && date.day < 12)
		return (false);
	return (true);
}

int	testDate(std::string line, std::string *date)
{
	s_date	sD;

	sD.year = atoi(line.substr(0, 4).c_str());
	sD.month = atoi(line.substr(5, 2).c_str());
	sD.day = atoi(line.substr(8, 2).c_str());
	if (isValidDate(sD) == false)
		return (printError(e_date, line.substr(0, 10), 0));
	if (dateAfterBtc(sD) == false)
		return (printError(e_beforeBtc, line.substr(0, 10), 0));
	*date = line.substr(0, 10);
	return (EXIT_SUCCESS);
}

int	testValue(std::string line, double *value)
{
	std::string	valueStr;

	try
	{
		valueStr = line.substr(13, std::string::npos).c_str();
	}
	catch (const std::exception &e)
	{
		return (printError(e_input, line, 0));
	}
	*value = atof(valueStr.c_str());
	if ((valueStr != "0" && *value == 0) || *value < 0 || *value > 2147483647)
		return (printError(e_value, valueStr, *value));
	return (EXIT_SUCCESS);
}
