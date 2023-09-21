/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:50:29 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/21 13:41:49 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal blata;
		Animal bhata(blata);
		std::cout << j->getType() << " " << std::endl;
		std::cout << "blata" << std::endl;
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
	}
	std::cout << "Test 1 finished" << std::endl;
	{
		const WrongAnimal* wrongCat = new WrongCat();
		WrongCat a;

		wrongCat->makeSound();
		a.makeSound();
	}
	return 0;
}