/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:07:21 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/05 14:43:10 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

int main(void)
{
	const Animal* j = new Dog();
	std::cout << std::endl;
	const Animal* i = new Cat();
	std::cout << std::endl;
	const Animal* k = new Cat();
	std::cout << std::endl;
	k = i;
	std::cout << std::endl;
	delete j;//should not create a leak
	std::cout << std::endl;
	delete i;
	std::cout << std::endl;
	delete k;
}
