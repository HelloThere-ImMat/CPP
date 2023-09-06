/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:50:29 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/06 13:26:40 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

int main()
{
	Dog d1;
	Dog d2;
	Cat c1;
	Cat c2;
	//Animal A1; Uncomment to see that the animal class is indeed abstract

	Animal *j = new Dog();
	delete j;

	d2.get_brain()->setIdeas("Bonjour", 0);
	d2.get_brain()->setIdeas("Au revoir", 99);
	std::cout << "before assignation d1 brain idea 0 is " << d1.get_brain()->getIdeas(0) << std::endl;
	std::cout << "before assignation d1 brain idea 99 is " << d1.get_brain()->getIdeas(99) << std::endl;
	std::cout << std::endl;
	d1 = d2;
	std::cout << std::endl;
	std::cout << "after assignation d1 brain idea 0 is " << d1.get_brain()->getIdeas(0) << std::endl;
	std::cout << "after assignation d1 brain idea 99 is " << d1.get_brain()->getIdeas(99) << std::endl;
	c1 = c2;
	std::cout << std::endl;
	return 0;
}
