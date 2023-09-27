/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:58:52 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/27 14:50:10 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer default constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &other)
{
	*this = other;
	std::cout << "Serializer copy constructor called" << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "Serializer destructor called" << std::endl;
}

Serializer &Serializer::operator=(const Serializer &assign)
{
	(void)assign;
	return (*this);
}

//Member Functs

uintptr_t Serializer::serialize(Data *ptr)
{
	uintptr_t	intPTR;

	intPTR = reinterpret_cast<uintptr_t>(ptr);
	return (intPTR);
}

Data *Serializer::deserialize(uintptr_t raw)
{
	Data	*dataPTR;

	dataPTR = reinterpret_cast<Data *>(raw);
	return (dataPTR);
}