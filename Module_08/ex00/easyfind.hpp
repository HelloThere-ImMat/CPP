/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:41:31 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/19 13:18:46 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdlib.h>
#include <algorithm>

template <typename T>
int easyfind (T &cont, int compare)
{
	if (find(cont.begin(), cont.end(), compare) == cont.end())
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}