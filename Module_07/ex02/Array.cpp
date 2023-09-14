/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:30:24 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/14 19:44:20 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	_array = new T[0];
	std::cout << "Array default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_array = new T[n];
	std::cout << "Array specified constructor called" << std::endl;
}

template <typename T>
Array<T>::~Array()
{
	delete _array;
	std::cout << "Default array destructor called" << std::endl;
}

template <typename T>
Array<T>::Array(const Array &other)
{
	*this = other;
	std::cout << "Array copy constructor called" << std::endl;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &assign)
{

}

template <typename T>
unsigned int Array<T>::size() const
{

}