/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:00:51 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/06 10:56:19 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span s(5);
	Span s2(1);
	Span s3(7);
	//TEST SPAN
	try
	{
		s.addNumber(5);
		s.addNumber(18);
		s.addNumber(15);
		s.addNumber(3);
		s.addNumber(2);
		std::cout << s.longestSpan() << std::endl;
		std::cout << s.shortestSpan() << std::endl;
	}
	catch(const std::string &e)
	{
		std::cerr << e << std::endl;
	}
	//TEST EXCEPTIONS
	try
	{
		s2.addNumber(2);
		s2.longestSpan();
	}
	catch(const std::string &e)
	{
		std::cerr << e << std::endl;
	}
	//TEST RANDOM NBR
	try
	{
		s3.addRandomElements(7);
		std::cout << s3.shortestSpan() << std::endl;
	}
	catch (const std::string &e)
	{
		std::cerr << e << std::endl;
	}
	return (0);
}
