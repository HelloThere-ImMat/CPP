/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:50:31 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/26 11:50:53 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

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