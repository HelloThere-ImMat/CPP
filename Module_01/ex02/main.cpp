/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:15:10 by mat               #+#    #+#             */
/*   Updated: 2023/08/05 11:28:32 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR;
	std::string	&stringREF = brain;

	stringPTR = &brain;

	std::cout << "str address     : " << &brain << std::endl;
	std::cout << "stringPTR value : " << stringPTR << std::endl;
	std::cout << "stringREF value : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "string                  : " << brain << std::endl;
	std::cout << "stringPTR pointed value : " << *stringPTR << std::endl;
	std::cout << "stringREF pointed value : " << stringREF << std::endl;
	return (0);
}
