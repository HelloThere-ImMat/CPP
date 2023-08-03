/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:52:37 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/03 12:18:24 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

// PhoneBook member functions

void	Phonebook::set_contact(int index)
{
	std::string	tmp;
	Contact		contact;

	std::cout << "First name > ";
	std::cin >> tmp;
	contact.set_first_name(tmp);
	std::cout << "Last name > ";
	std::cin >> tmp;
	contact.set_last_name(tmp);
	std::cout << "Surname > ";
	std::cin >> tmp;
	contact.set_surname(tmp);
	std::cout << "Phone number > ";
	std::cin >> tmp;
	contact.set_phone_nbr(tmp);
	std::cout << "Darkest secret > ";
	std::cin >> tmp;
	contact.set_secret(tmp);
	contact.index = index;

	Phonebook::contacts[index] = contact;
}

Contact	Phonebook::get_contact(int index) const
{
	return (this->contacts[index]);
}

void	Phonebook::print_contact(int index) const
{
	std::cout << "first_name : " << this->contacts[index].get_firt_name() << std::endl;
	std::cout << "last_name : " << this->contacts[index].get_last_name() << std::endl;
	std::cout << "surname : " << this->contacts[index].get_surname() << std::endl;
	std::cout << "phone nbr : " << this->contacts[index].get_phone_nbr() << std::endl;
	std::cout << "secret : " << this->contacts[index].get_secret();
}

// Contact member functions
// SET FUNCTS

void Contact::set_first_name(std::string str)
{
	this->_first_name = str;
	return ;
}

void Contact::set_last_name(std::string str)
{
	this->_last_name = str;
	return ;
}

void Contact::set_surname(std::string str)
{
	this->_surname = str;
	return ;
}

void Contact::set_phone_nbr(std::string str)
{
	this->_phone_nbr = str;
	return ;
}

void Contact::set_secret(std::string str)
{
	this->_secret = str;
	return ;
}

// GET FUNCTS

std::string	Contact::get_firt_name(void) const
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (this->_last_name);
}
std::string	Contact::get_surname(void) const
{
	return (this->_surname);
}

std::string	Contact::get_phone_nbr(void) const
{
	return (this->_phone_nbr);
}

std::string	Contact::get_secret(void) const
{
	return (this->_secret);
}

// Constructors and Destructors

Phonebook::Phonebook()
{
	// std::cout << "Created Phonebook" << std::endl;
}

Phonebook::~Phonebook()
{
	// std::cout << "Destroyed Phonebook" << std::endl;
}

Contact::Contact()
{
	// std::cout << "Created Contact" << std::endl;
}

Contact::~Contact()
{
	// std::cout << "Destroyed Contact" << std::endl;
}

