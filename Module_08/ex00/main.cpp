/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:46:23 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/19 13:19:33 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main(void)
{
	std::vector<int> v;
	std::list<int> l;
	std::deque<int> dq;

	v.push_back(5);
	v.push_back(6);
	v.push_back(2);
	v.push_back(0);

	dq.push_back(5);
	dq.push_back(6);
	dq.push_back(2);
	dq.push_back(0);

	if (easyfind(v, 6) == EXIT_SUCCESS)
		std::cout << "Success" << std::endl;
	else
		std::cout << "Failure" << std::endl;
	if (easyfind(dq, 0) == EXIT_SUCCESS)
		std::cout << "Success" << std::endl;
	else
		std::cout << "Failure" << std::endl;
	return (0);
}
