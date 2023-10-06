/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:39:22 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/06 10:57:46 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _size(N), _elementsNbr(0)
{
	std::cout << "Span default constructor called" << std::endl;
}

Span::Span(const Span &other)
{
	int i = 0;
	_size = other._size;
	_elementsNbr = other._elementsNbr;
	while (i < _elementsNbr)
	{
		_v.push_back(other._v[i]);
		i++;
	}
	std::cout << "Span copy constructor called" << std::endl;
}

void Span::addNumber(int value)
{
	if (_elementsNbr == _size)
		throw std::string("Too many elements in array");
	_v.push_back(value);
	_elementsNbr++;
}

void Span::addRandomElements(int randValNbr)
{
	int i = 0;
	if (randValNbr > _size)
		throw std::string("Too many elements in array to add this list");
	srand(time(NULL));
	while (i < randValNbr)
	{
		_v.push_back(rand());
		_elementsNbr++;
		i++;
	}
}

unsigned int Span::longestSpan()
{
	int	diff = 0;
	int span;
	int i, j;

	if (_elementsNbr == 0 || _elementsNbr == 1)
		throw std::string("Not enough elements to make a span calculus");
	i = 0;
	while (i < _elementsNbr - 1)
	{
		j = 1;
		while (j < _elementsNbr)
		{
			diff = _v[i] - _v[j];
			if (diff < 0)
				diff *= -1;
			if (diff > span)
				span = diff;
			j++;
		}
		i++;
	}
	return (span);
}

unsigned int Span::shortestSpan()
{
	bool first = true;
	int	prevSpan;
	int span;
	int i, j;

	if (_elementsNbr == 0 || _elementsNbr == 1)
		throw std::string("Not enough elements to make a span calculus");
	i = 0;
	while (i < _elementsNbr - 1)
	{
		j = 1;
		while (j < _elementsNbr)
		{
			span = _v[i] - _v[j];
			if (span < 0)
				span *= -1;
			if (first == true)
			{
				prevSpan = span;
				first = false;
			}
			if (span < prevSpan)
				prevSpan = span;
			j++;
		}
		i++;
	}
	return (span);
}

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}
