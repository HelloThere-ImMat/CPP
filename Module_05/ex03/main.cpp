/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:25:38 by mat               #+#    #+#             */
/*   Updated: 2023/09/12 12:37:36 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	Bureaucrat boss("Boss", 1);
	Bureaucrat noob("Noob", 150);
	ShruberryCreationForm s1("Target 1");
	ShruberryCreationForm s1cpy(s1);
	RobotomyRequestForm r1("Target 2");
	RobotomyRequestForm r1cpy(r1);
	PresidentialPardonForm p1("Target 3");
	PresidentialPardonForm p1cpy(p1);

	Intern intern;
	AForm *s2;
	AForm *r2;
	AForm *p2;
	AForm *e1;
	std::cout << std::endl;
	boss.signForm(s1);
	noob.signForm(r1);
	boss.signForm(r1);
	boss.signForm(p1);
	std::cout << std::endl;
	boss.executeForm(s1);
	noob.executeForm(r1);
	boss.executeForm(r1);
	boss.executeForm(p1);
	std::cout << std::endl;
	s2 = intern.makeForm("ShruberryCreationForm", "Home");
	r2 = intern.makeForm("RobotomyRequestForm", "Mench");
	p2 = intern.makeForm("PresidentialPardonForm", "Frau");
	e1 = intern.makeForm("ErrorName", "IDK");
	std::cout << std::endl;
	delete s2;
	delete r2;
	delete p2;
	delete e1;
	return (0);

}
