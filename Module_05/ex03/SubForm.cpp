/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubForm.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:31:03 by mat               #+#    #+#             */
/*   Updated: 2023/09/11 13:28:16 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SubForm.hpp"

//ShruberryCreationForm

ShruberryCreationForm::ShruberryCreationForm() : AForm("Shruberry", 145, 137), _target("default")
{
	std::cout << "Shruberry Form default constructor called" << std::endl;
}

ShruberryCreationForm::ShruberryCreationForm(std::string target) : AForm("Shruberry", 145, 137), _target(target)
{
	std::cout << "Shruberry Form specified constructor called" << std::endl;
}

ShruberryCreationForm::ShruberryCreationForm(const ShruberryCreationForm &other) : AForm(other)
{
	*this = other;
	std::cout << "Shruberry Form copy constructor called" << std::endl;
}

ShruberryCreationForm::~ShruberryCreationForm()
{
	std::cout << "Shruberry Form destructor called" << std::endl;
}

ShruberryCreationForm &ShruberryCreationForm::operator=(const ShruberryCreationForm &assign)
{
	this->_target = assign._target;
	return (*this);
}

void	ShruberryCreationForm::action() const
{
	std::string fileName = this->_target + (std::string)"_shruberry";
	std::ofstream file(fileName.c_str());

	file << "               ,@@@@@@@," << std::endl;
	file << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	file << "   `&%\\ ` /%&'    |.|       \\ '|8'" << std::endl;
	file << "       |o|        | |         | |" << std::endl;
	file << "       |.|        | |         | |" << std::endl;
	file << "jgs \\\\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
}

//RobotomyRequestForm

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy request", 72, 45), _target("Default")
{
	std::cout << "Robotomy request form default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy request", 72, 45), _target(target)
{
	std::cout << "Robotomy request form specified constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other)
{
	*this = other;
	std::cout << "Robotomy request form copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy request form destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	this->_target = assign._target;
	return (*this);
}

void	RobotomyRequestForm::action() const
{
	int	rNb;

	std::cout << "*Drilling noises*" << std::endl;
	srand(time(NULL));
	rNb = rand() % 2;
	if (rNb)
		std::cout << _target << " has been successfully robotomized" << std::endl;
	else
		std::cout << "The robotomy has failed" << std::endl;

}

////PresidentialPardonForm

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential pardon", 25, 5), _target("Default")
{
	std::cout << "Presidential pardon form default constructor called" << std::endl;

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential pardon", 25, 5), _target(target)
{
	std::cout << "Presidential pardon form specified constructor called" << std::endl;

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other)
{
	*this = other;
	std::cout << "Presidential pardon form copy constructor called" << std::endl;

}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential pardon form destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	this->_target = assign._target;
	return (*this);
}

void	PresidentialPardonForm::action() const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}