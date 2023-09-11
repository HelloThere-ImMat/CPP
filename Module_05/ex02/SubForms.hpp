/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubForms.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:37:28 by mat               #+#    #+#             */
/*   Updated: 2023/09/11 09:58:51 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"

class ShruberryCreationForm : public Form
{
	ShruberryCreationForm();
	~ShruberryCreationForm();
	ShruberryCreationForm(const ShruberryCreationForm &other);
	ShruberryCreationForm &operator=(const ShruberryCreationForm &assign);
};

class RobotomyRequestForm : public Form
{
	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &other);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &assign);
};

class PresidentialPardonForm : public Form
{
	PresidentialPardonForm();
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &other);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &assign);
};
