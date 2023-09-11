/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubForm.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:37:28 by mat               #+#    #+#             */
/*   Updated: 2023/09/11 13:24:38 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"
#include <fstream>
#include <cstdlib>

class ShruberryCreationForm : public AForm
{
	public :
		ShruberryCreationForm();
		ShruberryCreationForm(std::string target);
		~ShruberryCreationForm();
		ShruberryCreationForm(const ShruberryCreationForm &other);
		ShruberryCreationForm &operator=(const ShruberryCreationForm &assign);
		void	action() const;
	private :
		std::string _target;
};

class RobotomyRequestForm : public AForm
{
	public :
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &other);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &assign);
		void	action() const;
	private :
		std::string _target;
};

class PresidentialPardonForm : public AForm
{
	public :
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &other);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &assign);
		void	action() const;
	private :
		std::string _target;
};
