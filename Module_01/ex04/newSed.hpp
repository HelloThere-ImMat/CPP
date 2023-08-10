/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newSed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:33:18 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/10 14:50:30 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

# define INVALID_ARG_NB	"This program takes 3 parameters only"
# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

typedef struct s_data
{
	int			file_fd;
	std::string	s1;
	std::string	s2;
}				t_data;
