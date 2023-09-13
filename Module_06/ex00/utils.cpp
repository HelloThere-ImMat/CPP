/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:24:57 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/13 22:36:27 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	isChar(std::string str)
{
	const char *charTab = str.c_str();
	if (str.size() != 1)
		return (false);
	else
	{
		if (isdigit(charTab[0]) != 0)
			return (false);
	}
	return (true);
}

bool	isInt(std::string str)
{
	const char *charTab = str.c_str();
	int		i = 0;

	while (charTab[i])
	{
		if (isdigit((int)charTab[i]) == 0)
			return (false);
		i++;
	}
	return (true);
}

bool	isFloat(std::string str)
{
	const char *charTab = str.c_str();
	int i = 0;

	if (!str.compare(0, 5, "+inff") || !str.compare(0, 5, "-inff") || !str.compare(0, 4, "nanf"))
		return (true);
	while (charTab[i + 1])
	{
		if (isdigit((int)charTab[i]) == 0 && (int)charTab[i] != 46)
			return (false);
		i++;
	}
	if (charTab[i] == 102)
		return (true);
	return (false);
}

bool	isDouble(std::string str)
{
	const char *charTab = str.c_str();
	int i = 0;
	if (!str.compare(0, 4, "+inf") || str.compare(0, 4, "-inf") || !str.compare(0, 3, "nan"))
		return (true);
	while (charTab[i])
	{
		if (isdigit((int)charTab[i]) == 0 && (int)charTab[i] != 46)
			return (false);
		i++;
	}
	return (true);
}