/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:52:40 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/04 08:43:29 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PHONEBOOK_HPP
# define	PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <stdbool.h>
#include <stdlib.h>

class Contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_surname;
	std::string	_phone_nbr;
	std::string	_secret;

public:
	Contact();
	~Contact();

	void		set_first_name(std::string str);
	void		set_last_name(std::string str);
	void		set_surname(std::string str);
	void		set_phone_nbr(std::string str);
	void		set_secret(std::string str);
	std::string	get_firt_name(void) const;
	std::string	get_last_name(void) const;
	std::string	get_surname(void) const;
	std::string	get_phone_nbr(void) const;
	std::string	get_secret(void) const;

	bool		empty;
	int			index;
};

class Phonebook
{
	private:
	Contact	contacts[8];

	public:
	Phonebook();
	~Phonebook();
	void	set_contact(int index);
	void	print_contact(int index) const;
	Contact	get_contact(int index) const;
};

#endif
