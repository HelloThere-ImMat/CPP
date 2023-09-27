/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:32:35 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/27 16:33:26 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "the type of this pointer is A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "the type of this pointer is B" << std::endl;
	if (dynamic_cast<C *>(p) != NULL)
		std::cout << "the type of this pointer is C" << std::endl;
}

void	identify(Base &p)
{
	if (dynamic_cast<A *>(&p) != NULL)
		std::cout << "the type of this ref is A" << std::endl;
	else if (dynamic_cast<B *>(&p) != NULL)
		std::cout << "the type of this ref is B" << std::endl;
	else if (dynamic_cast<C *>(&p) != NULL)
		std::cout << "the type of this ref is C" << std::endl;
}

Base *generate(void)
{
	Base	*basePTR;
	int		rNb;

	srand(time(NULL));
	rNb = rand() % 3;
	std::cout << "The random nbr is " << rNb << std::endl;
	switch (rNb)
	{
		case 0 : basePTR = new A();
			break;
		case 1 : basePTR = new B();
			break;
		case 2 : basePTR = new C();
			break;
	}
	return (basePTR);
}

int main(void)
{
	Base *basePTR;

	basePTR = generate();
	identify(basePTR);
	identify(*basePTR);
	return (0);
}