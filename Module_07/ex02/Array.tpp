/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:30:24 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/15 11:06:13 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	_array = new T[0];
	_size = 0;
	std::cout << "Array default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_array = new T[n];
	_size = n;
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
	int i = 0;

	if (this != &assign)
	{
		_size = assign.size;
		delete _array;
		_array = new T[assign.size];
		while (i < assign.size)
			_array[i] = assign._array[i++];
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw IndexTooHigh();
	return (_array[index]);
}

template <typename T>
unsigned int &Array<T>::size()
{
	return (_size);
}

template <typename T>
const char* Array<T>::IndexTooHigh::what() const throw()
{
	return "The index is too high";
}
