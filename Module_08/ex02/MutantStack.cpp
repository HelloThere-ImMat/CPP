/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:42:52 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/06 12:02:01 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : _size(8), _elementNbr(0)
{
	std::cout << "MutantStack default constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "MutantStack default destructor called" << std::endl;
}

template <typename T>
bool MutantStack<T>::empty() const
{
	if (!_elementNbr)
		return (true);
	else
		return (false);
}

template <typename T>
int MutantStack<T>::size() const
{
	return (_elementNbr);
}

template <typename T>
const T &MutantStack<T>::top() const
{
	return (_tab[_elementNbr - 1]);
}

template <typename T>
void T &MutantStack<T>::push()
{
	
}
