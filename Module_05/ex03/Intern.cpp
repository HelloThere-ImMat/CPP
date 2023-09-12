/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:36:18 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/12 12:34:36 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(Intern const &other)
{
	(void)other;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &assign)
{
	(void)assign;
	return (*this);
}

AForm *Intern::makeForm(std::string formName, std::string formTarget)
{
	t_FormType formTab[] = {
		{.name="ShruberryCreationForm", .makeFormFunc=makeShruberry},
		{.name="RobotomyRequestForm", .makeFormFunc=makeRobotomy},
		{.name="PresidentialPardonForm", .makeFormFunc=makePresidentialPardon},
		{.name="NoForm", .makeFormFunc=makeNoForm}
	};
	int i = 0;

	while (i < 3)
	{
		if (formName.compare(formTab[i].name) == 0)
			break ;
		i++;
	}
	return (formTab[i].makeFormFunc(formTarget));
}

AForm *makeShruberry(std::string target)
{
	AForm *formPTR;

	formPTR = new ShruberryCreationForm(target);
	std::cout << "Intern created Shruberry creation form" << std::endl;
	return (formPTR);
}

AForm *makeRobotomy(std::string target)
{
	AForm *formPTR;

	formPTR = new RobotomyRequestForm(target);
	std::cout << "Intern created Robotomy request form" << std::endl;
	return (formPTR);
}

AForm *makePresidentialPardon(std::string target)
{
	AForm *formPTR;

	formPTR = new PresidentialPardonForm(target);
	std::cout << "Intern created Presidential Pardon Form" << std::endl;
	return (formPTR);
}

AForm *makeNoForm(std::string target)
{
	(void)target;
	std::cout << "The intern could create form because this form type doesn't exist" << std::endl;
	return (NULL);
}