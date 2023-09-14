/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:32:54 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/14 18:42:20 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int array1[] = {9, 0, 5, 3, 2};
	std::string	array2[] = {"Hello", "Hola" , "Bonjour", "Bonjourno", "Hallo"};
	float		array3[] = {5.6, 4.2, 23.3, 6.5, 4.2};

	iter(array1, 5, printValue);
	iter(array2, 5, printValue);
	iter(array3, 5, printValue);
	return (0);
}