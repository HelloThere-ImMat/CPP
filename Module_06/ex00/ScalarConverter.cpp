/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:26:48 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/13 22:49:26 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter &other)
{
	(void)other;
	std::cout << "ScalarConverter copy constructor called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &assign)
{
	(void)assign;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter destructor called" << std::endl;
}

// Member Functs

t_Types getType(std::string str)
{
	if (isChar(str))
		return (_char);
	else if (isInt(str))
		return (_int);
	else if (isFloat(str))
		return (_float);
	else if (isDouble(str))
		return (_double);
	return (_other);

}

void	convertSpec(std::string str)
{
	int i = 0;
	std::string	specStrs[] = {"+inf" , "-inf", "nan"};
	std::cout << "char: Impossible" << std::endl;
	std::cout << "int: Impossible" << std::endl;
	std::cout << "float: ";
	while (i < 2)
	{
		if (str.compare(0, 4, specStrs[i]) == 0)
			std::cout << specStrs[i];
		i++;
	}
	if (str.compare(0, 3, specStrs[2]) == 0)
		std::cout << specStrs[2];
	std::cout << "f" << std::endl;
	std::cout << "double: ";
	i = 0;
	while (i < 2)
	{
		if (str.compare(0, 4, specStrs[i]) == 0)
			std::cout << specStrs[i];
		i++;
	}
	if (str.compare(0, 3, specStrs[2]) == 0)
		std::cout << specStrs[2];
	std::cout << std::endl;
}

void	convertChar(std::string str)
{
	const char *charTab = str.c_str();
	std::cout << "char: ";
	if (charTab[0] < 32 || charTab[0] > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << str << std::endl;
	std::cout << "int: " << static_cast<int>(charTab[0]) << std::endl;
	std::cout << "float: " << static_cast<int>(charTab[0]) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<int>(charTab[0]) << ".0" << std::endl;
}

void	convertInt(std::string str)
{
	int	value = atoi(str.c_str());
	std::cout << "char: ";
	if (value < 32 || value > 126)
	{
		std::cout << "Non displayable" << std::endl;
		if (value < 0 || value > 127)
			std::cout << "Impossible" << std::endl;
	}
	else
		std::cout << static_cast<char>(value) << std::endl;
	std::cout << "int: " << value << std::endl;
	std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
}

void	convertFloat(std::string str)
{
	if (!str.compare(0, 5, "+inff") || !str.compare(0, 5, "-inff") || !str.compare(0, 4, "nanf"))
		return convertSpec(str);
	float value = atof(str.c_str());
	std::cout << value << std::endl;
	std::cout << "char: ";
	if (value < 32 || value > 126)
	{
		std::cout << "Non displayable" << std::endl;
		if (value < 0 || value > 127)
			std::cout << "Impossible" << std::endl;
	}
	else
		std::cout << static_cast<char>(value) << std::endl;
	std::cout << "int: " << static_cast<int>(value) << std::endl;
	std::cout << "float: " << str << std::endl;
	std::cout << "double: " << str.substr(0, str.size() - 1) << std::endl;
}

void	convertDouble(std::string str)
{
	if (!str.compare(0, 5, "+inff") || !str.compare(0, 5, "-inff") || !str.compare(0, 4, "nanf"))
		return convertSpec(str);
	double value = atof(str.c_str());
	std::cout << "char: ";
	if (value < 32 || value > 126)
	{
		std::cout << "Non displayable" << std::endl;
		if (value < 0 || value > 127)
			std::cout << "Impossible" << std::endl;
	}
	else
		std::cout << static_cast<char>(value) << std::endl;
	std::cout << "int: " << static_cast<int>(value) << std::endl;
	std::cout << "float: " << static_cast<float>(value) << std::endl;
	std::cout << "double: " << str << std::endl;
}

void ScalarConverter::convert(std::string str)
{
	std::cout << getType(str) << std::endl;
	switch(getType(str))
	{
		case _char : convertChar(str);
			break;
		case _int :	convertInt(str);
			break;
		case _float : convertFloat(str);
			break;
		case _double : convertDouble(str);
			break;
		default: break;
	}
}
