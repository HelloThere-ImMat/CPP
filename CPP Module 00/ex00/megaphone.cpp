/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:40:22 by mat               #+#    #+#             */
/*   Updated: 2023/07/24 10:57:57 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

# define NO_ARGS "* LOUD AND UNBEREABLE FEEDBACK NOISES *"

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << NO_ARGS;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[i][j]; j++)
				std::cout << (char)toupper(argv[i][j]);
			std::cout << " ";
		}
	}
	std::cout << std::endl;
}
