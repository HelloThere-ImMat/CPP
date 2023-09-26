/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:52:05 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/26 11:52:33 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

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
