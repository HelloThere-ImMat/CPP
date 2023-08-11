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

//std::string	replace_in_line(std::string line, t_data data)
//{
//	std::string	new_string;
//	int			i;

//	i = 0;
//	while (line[i] != ' ')
//	{

//	}
//}

void	copy_everything(t_data data)
{
	std::ifstream	readFlux(data.fileName);
	std::ofstream	writeFlux(data.replaceFileName, std::ios::out);
	std::string		line;

	//std::getline(readFlux, line);
	readFlux >> line;
	writeFlux << line;
	while (line.empty() == false)
	{
		std::cout << line << std::endl;
		readFlux >> line;
		//replace_in_line(line, data);
		writeFlux << line;
	}
}

int main(int argc, char **argv)
{
	t_data data;
	std::string		line;

	if (argc != 4)
		return (print_error(INVALID_ARG_NB));
	if (get_args(&data, argv) == EXIT_FAILURE)
			return (EXIT_FAILURE);
	copy_everything(data);
	delete data.replaceFileName;
	return (EXIT_SUCCESS);
}