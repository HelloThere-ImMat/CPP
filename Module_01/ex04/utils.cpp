/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:39:50 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/11 16:55:45 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "newSed.hpp"

int	print_error(const char *error)
{
	std::cout << "Error" << std::endl;
	std::cout << error << std::endl;
	return (EXIT_FAILURE);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*dst;

	i = 0;
	j = 0;
	if (s1 == NULL)
		return (strdup(s2));
	if (s2 == NULL)
		return (strdup(s1));
	dst = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (!dst)
		return (NULL);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		dst[i + j] = s2[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dst);
}

int get_args(t_data *data, char **argv)
{
	char *tmp;
	std::ifstream testFlux(argv[1]);

	if (testFlux)
	{
		tmp = strdup(argv[2]);
		if (tmp == NULL)
			return (print_error("malloc error"));
		data->s1 = tmp;
		tmp = strdup(argv[3]);
		if (tmp == NULL)
			return (print_error("malloc error"));
		data->s2 = tmp;
		data->fileName = argv[1];
		data->replaceFileName = ft_strjoin(argv[1], ".replace");
		return (EXIT_SUCCESS);
	}
	else
		return (print_error("Cannot open file"));

}