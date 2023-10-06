/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:53:46 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/06 15:00:19 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> mt;
	MutantStack<int>::iterator it;

	mt.push(4);
	mt.push(5);
	mt.push(7);
	mt.push(2);
	mt.push(6);

	for (it = mt.begin(); it != mt.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	return (0);
}