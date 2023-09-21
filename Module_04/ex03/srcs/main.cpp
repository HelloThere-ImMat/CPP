/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:56:33 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/21 12:15:48 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

//Test A copy of a character for leaks

int main()
{
	{
		IMateriaSource* src = new MateriaSource();
		std::cout << std::endl;

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		std::cout << std::endl;

		ICharacter* me = new Character("me");
		std::cout << std::endl;

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		std::cout << std::endl;

		tmp = src->createMateria("cure");
		me->equip(tmp);
		std::cout << std::endl;

		ICharacter* bob = new Character("bob");
		std::cout << std::endl;

		me->use(0, *bob);
		me->use(1, *bob);
		std::cout << std::endl;

		delete bob;
		delete me;
		delete src;
	}
	std::cout << "TESTS 1 FINISHED" << std::endl << std::endl;
	{
		Character bob("bob");
		MateriaSource mSrc;
		mSrc.learnMateria(new Ice());
		std::cout << std::endl;

		MateriaSource cpySrc(mSrc);
		std::cout << std::endl;

		bob.equip(cpySrc.createMateria("ice"));
		std::cout << std::endl;

		bob.equip(new Ice());
		std::cout << std::endl;

		Character cpy(bob);
		std::cout << std::endl;

		Character target("steve");
		std::cout << std::endl;

		cpy.use(0, target);
		std::cout << std::endl;
	}
	return (0);
}
