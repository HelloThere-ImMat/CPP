/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:17:15 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/13 20:48:15 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

typedef enum e_Types
{
	_char,
	_int,
	_float,
	_double,
	_other
}			t_Types;

class ScalarConverter
{
	public :
		ScalarConverter();
		ScalarConverter(ScalarConverter &other);
		~ScalarConverter();
		ScalarConverter &operator=(const ScalarConverter &assign);
		static void convert(std::string str);
};

//Utils

bool	isChar(std::string str);
bool	isInt(std::string str);
bool	isFloat(std::string str);
bool	isDouble(std::string str);