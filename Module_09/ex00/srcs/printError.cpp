/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printError.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:47:40 by mat               #+#    #+#             */
/*   Updated: 2023/11/17 12:17:25 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	printError(e_pe error, std::string str, double value)
{
	switch (error)
	{
		case e_empty :
			break;
		case e_input :
			std::cout << "Error : bad input => " << str << std::endl;
			break;
		case e_beforeBtc :
			std::cout << "Error : no record of bitcoin at the following time : " << str << std::endl;
			break;
		case e_value :
			if (value < 0)
				std::cout << "Error : not a positive number" << std::endl;
			else if (value > 1000)
				std::cout << "Error : too large a number" << std::endl;
			else if (str != "0" && value == 0)
				std::cout << "Error : value is not in float format" << std::endl;
	}
	return (EXIT_FAILURE);
}
