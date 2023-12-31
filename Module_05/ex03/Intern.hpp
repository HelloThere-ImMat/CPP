/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:31:43 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/26 11:56:44 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShruberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

typedef struct s_FormType
{
	std::string name;
	AForm *(*makeFormFunc)(std::string target);
}	t_FormType;

class Intern
{
	public :
		Intern();
		Intern(Intern const &other);
		~Intern();
		Intern &operator=(const Intern &assign);
		AForm *makeForm(std::string formName, std::string formTarget);
};

AForm *makeShruberry(std::string target);
AForm *makeRobotomy(std::string target);
AForm *makePresidentialPardon(std::string target);
AForm *makeNoForm(std::string target);
