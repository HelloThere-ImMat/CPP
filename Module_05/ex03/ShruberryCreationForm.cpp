/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:51:22 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/26 11:51:48 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShruberryCreationForm.hpp"

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
