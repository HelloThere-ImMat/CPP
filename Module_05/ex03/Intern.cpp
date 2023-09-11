/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:36:18 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/11 13:59:29 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(Intern const &other)
{
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &assign)
{
	return (*this);
}

AForm *Intern::makeForm(std::string formName, std::string formTarget)
{
	std::string formTab[] = {
		"ShruberryCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"
	};
	int i = 0;

	while (i < 4)
	{
		if (formName.compare(formTab[i]) != 0)
			i++;
		else
		{
			
		}
	}

}