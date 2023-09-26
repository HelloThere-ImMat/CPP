/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:25:38 by mat               #+#    #+#             */
/*   Updated: 2023/09/26 11:54:45 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShruberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	return (0);
}
