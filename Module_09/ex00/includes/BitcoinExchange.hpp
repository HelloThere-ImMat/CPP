/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:36:22 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/10 14:16:39 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <utility>
#include <cstdlib>
#include <stdlib.h>

#define DATABASE_PATH	"./data/data.csv"

class BitcoinExchange
{
	private :
		std::map<std::string, double>	_btcIndex;
		std::pair<std::string, double>	*getPair(std::string line);
		int								fillMap(std::ifstream &file);
		int								getDb();
		void							printMessage(std::string date, double value);
	public :
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &assign);

		int								BtcCalculator(std::ifstream &input);
		std::map<std::string, double>	&getBtcIndex(void);
		~BitcoinExchange();
};

typedef enum	e_pairError
{
	e_empty,
	e_input,
	e_beforeBtc,
	e_value
}				e_pe;

typedef struct t_date
{
	int	year;
	int	month;
	int day;
}		s_date;

void	printmap(BitcoinExchange &bla);
int		printError(e_pe error, std::string str, double value);
int		testDate(std::string line, std::string *date);
int		testValue(std::string line, double *value);
std::string findClosestKey(std::map<std::string, double> &map, std::string date);
