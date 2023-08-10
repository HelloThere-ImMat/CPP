/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:32:34 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/10 14:55:41 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <newSed.hpp>

int	print_error(const char *error)
{
	std::cout << "Error" << std::endl;
	std::cout << error << std::endl;
	return (EXIT_FAILURE);
}

int get_args(t_data *data, char **argv)
{
	char *tmp;
	data->file_fd = open(argv[1], O_RDONLY);
	if (data->file_fd == -1)
		return (print_error("file cannot be opened"));
	tmp = strdup(argv[2]);
	if (tmp == NULL)
		return (print_error("malloc error"));
	data->s1 = tmp;
	tmp = strdup(argv[3]);
	if (tmp == NULL)
		return (print_error("malloc error"));
	data->s2 = tmp;
	return (EXIT_SUCCESS);
}

int main(int argc, char **argv)
{
	t_data data;

	if (argc != 4)
		return (print_error(INVALID_ARG_NB));
	if (get_args(&data, argv) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	std::cout << data.s1 << std::endl;
	std::cout << data.s2 << std::endl;
	std::cout << data.file_fd << std::endl;
	return (EXIT_SUCCESS);
}