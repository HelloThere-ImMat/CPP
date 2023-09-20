/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:33:57 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/15 11:06:57 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int main(void)
{
	Array<int> a(4);
	unsigned int i = -1;
	const unsigned int size = a.size();

	std::cout << a[3] << std::endl;
	while (++i < size)
		a[i] = i;
	std::cout << a[3] << std::endl;
	try
	{
		std::cout << a[5] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
