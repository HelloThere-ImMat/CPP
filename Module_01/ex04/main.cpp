/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:32:34 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/11 16:40:24by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <newSed.hpp>

bool	is_replace_word(const char *line_char, int *i, t_data data, std::ofstream &writeFlux)
{
	std::string word;

	while (line_char[*i] && line_char[*i] != ' ' && line_char[*i] != '\n')
	{
		word.push_back(line_char[*i]);
		(*i)++;
	}
	if (word.compare(data.s1) != 0)
	{
		writeFlux << word;
		return (false);
	}
	return (true);
}

void	replace_in_line(std::string line, t_data data, std::ofstream &writeFlux)
{
	const char		*line_char;
	int				i;

	line_char = line.c_str();
	i = 0;
	while (line_char[i])
	{
		if (is_replace_word(line_char, &i, data, writeFlux) == true)
			writeFlux << data.s2;
		if (line_char[i] != '\0')
		{
			writeFlux << " ";
			i++;
		}
	}
}

void	copy_everything(t_data data)
{
	std::ifstream	readFlux(data.fileName.c_str());
	std::ofstream	writeFlux(data.replaceFileName.c_str());
	std::string		line;

	while (readFlux.eof() == false)
	{
		std::getline(readFlux, line);
		replace_in_line(line, data, writeFlux);
		writeFlux << std::endl;
	}
}

int main(int argc, char **argv)
{
	t_data			data;
	std::string		line;

	if (argc != 4)
		return (print_error(INVALID_ARG_NB));
	if (get_args(&data, argv) == EXIT_FAILURE)
			return (EXIT_FAILURE);
	copy_everything(data);
	return (EXIT_SUCCESS);
}