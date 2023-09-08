/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:25:38 by mat               #+#    #+#             */
/*   Updated: 2023/09/08 14:04:29 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
	Bureaucrat nb1("Thomas", 150);
	Bureaucrat nb2("Baptiste", 40);
	Form f1("Form1", 40, 38);
	try
	{
		Form error("error", 156, 9);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	nb1.signForm(f1);
	
	nb2.signForm(f1);

	return (0);
}
