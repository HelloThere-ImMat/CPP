/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:41:31 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/17 15:55:25 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdlib.h>
#include <algorithm>

//template <typename T>
//int easyfind (T cont, int compare)
//{
//	int i = 0;
//	int lenght = cont.size();

//	while (i < lenght)
//	{
//		if (cont[i] == compare)
//			break ;
//		i++;
//	}
//	if (i == lenght)
//		return (EXIT_FAILURE);
//	return (EXIT_SUCCESS);
//}

template <typename T>
int easyfind (T cont, int compare)
{
	T::iterator	it = find(cont.begin(), cont.end(), compare);

	if (it = cont.end())
		return (EXIT_FAILURE);
	else
		return (EXIT_SUCCESS);
}