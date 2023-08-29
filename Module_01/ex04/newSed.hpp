/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newSed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:33:18 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/29 13:34:09 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef NEWSED_HPP
# define NEWSED_HPP

#include <iostream>
#include <string>
#include <string.h>
#include <cstdlib>
#include <fstream>

# define INVALID_ARG_NB	"This program takes 3 parameters only"
# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

typedef struct s_data
{
	char		*fileName;
	char		*replaceFileName;
	std::string	s1;
	std::string	s2;
}				t_data;

int 	get_args(t_data *data, char **argv);
char	*ft_strjoin(const char *s1, const char *s2);
int		print_error(const char *error);

#endif