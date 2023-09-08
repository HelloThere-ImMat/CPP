/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:25:38 by mat               #+#    #+#             */
/*   Updated: 2023/09/08 11:10:09 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat nb1("Thomas", 150);
	Bureaucrat nb2("Baptiste", 40);
	std::cout << nb1;
	try
	{
		Bureaucrat Error("Fuck it", 0);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
		nb2.increment();
		std::cout << "Grade was fourty, got decremented to " << nb2.get_grade() << std::endl;
	try
	{
		nb1.decrement();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
