/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:41:31 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/26 15:47:19 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template <typename T>
int easyfind (T cont, int compare)
{
	int lenght = cont.size();

	while (i < lenght)
	{
		if (cont[i] == compare)
			break ;
		i++;
	}
	if (i == lenght)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
