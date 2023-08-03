/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:52:30 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/03 14:19:36 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

static void get_index(Phonebook rep, int contact_nbr)
{
	std::string	buff;
	const char*	str;
	int			index;

	std::cout << "Enter index : ";
	std::cin >> buff;
	str = buff.c_str();
	index = atoi(str);
	if (index >= 0 && index < contact_nbr)
	{
		rep.print_contact(index);
		std::cout << std::endl;
	}
	else
	{
		std::cout << "Wrong index" << std::endl;
		get_index(rep, contact_nbr);
	}
}

static void	print_field(int index, Phonebook rep, std::string (Contact::*f)(void) const)
{
	std::string	tmp;
	int			i;

	std::cout << "|";
	tmp = (rep.get_contact(index).*f)();
	i = 0;
	while (i < 9 && tmp[i] != '\0')
		std::cout << tmp[i++];
	if (i == 9)
		std::cout << ".";
	else
	{
		while (i++ < 10)
			std::cout << " ";
	}
}

static void	contact_search(int contact_nbr, Phonebook rep)
{
	int			index;

	for (int j = 0; j < 45; j++)
		std::cout << "=";
	std::cout << std::endl;
	std::cout << "|Index     |First name|Last name |Surname   |" << std::endl;
	index = 0;
	while (index < contact_nbr)
	{
		std::cout << "|" << index << "         ";
		print_field(index, rep, &Contact::get_firt_name);
		print_field(index, rep, &Contact::get_last_name);
		print_field(index, rep, &Contact::get_surname);
		std::cout << "|" << std::endl;
		index++;
	}
	for (int k = 0; k < 45 ; k++)
		std::cout << "=";
	std::cout << std::endl;
	get_index(rep, contact_nbr);
}

int	main(void)
{
	Phonebook 	rep;
	std::string	buff;
	int			contact_nbr;

	contact_nbr = 0;
	while (true)
	{
		std::cout << "Phonebook > ";
		std::cin >> buff;
		if (buff == "ADD")
		{
			if (contact_nbr < 8)
				rep.set_contact(contact_nbr++);
			else
				rep.set_contact(0);
		}
		else if (buff == "SEARCH")
			contact_search(contact_nbr, rep);
		else if (buff == "EXIT")
			break ;
		std::cout << std::endl;
	}
	std::cout << "Exiting Phonebook" << std::endl << "Baiii" << std::endl;
	return (0);
}



