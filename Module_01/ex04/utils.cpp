/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:39:50 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/11 16:18:37 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "newSed.hpp"

int	print_error(const char *error)
{
	std::cout << "Error" << std::endl;
	std::cout << error << std::endl;
	return (EXIT_FAILURE);
}

int get_args(t_data *data, char **argv)
{
	std::ifstream testFlux(argv[1]);

	if (testFlux)
	{
		data->s1 = argv[2];
		data->s2 = argv[3];
		data->fileName = argv[1];
		data->replaceFileName = argv[1] + (std::string)".replace";
		std::ofstream testFlux2(data->replaceFileName.c_str());
		if (!testFlux2)
			return (print_error("Cannot open file"));
	}
	else
		return (print_error("Cannot open file"));
	return (EXIT_SUCCESS);
}