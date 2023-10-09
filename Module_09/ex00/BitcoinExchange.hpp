/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:36:22 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/09 13:09:21 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <utility>

class BitcoinExchange
{
	private :
		std::map<std::string, double>	_btcIndex;
	public :
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &assign);
		int	fillMap(std::ifstream &file);
		~BitcoinExchange();
};

typedef enum	e_pairError
{
	e_empty,
	e_input,
	e_date,
	e_value
}				e_pe;


std::pair<std::string, double> *getPair(std::string line);

