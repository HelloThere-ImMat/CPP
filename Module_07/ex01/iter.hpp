/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:25:25 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/14 18:38:54 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

template <typename T>
void iter(T *array, size_t size, void(*f)(T a))
{
	size_t	i = 0;
	while (i < size)
		f(array[i++]);
}

template <typename T>
void printValue(T value)
{
	std::cout << "The value is " << value << std::endl;
}