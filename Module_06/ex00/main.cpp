/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:37:10 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/13 20:51:31 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Wrong argument number, this program takes one argument" << std::endl;
		return (1);
	}
	ScalarConverter scale;
	std::string		arg = argv[1];
	scale.convert(arg);
	return (0);
}