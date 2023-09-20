/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:55:01 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/20 14:40:35 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("Cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other._type)
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &assign)
{
	(void)assign;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure *Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;

}
