/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:39:22 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/19 14:03:55 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _size(N), _elementsNbr(0)
{
	std::cout << "Span default constructor called" << std::endl;
}

Span::Span(const Span &other)
{
	std::cout << "Span copy constructor called" << std::endl;
	int i = 0;
	_size = other._size;
	_elementsNbr = other._elementsNbr;
	while (i < _elementsNbr)
	{
		_v.push_back(other._v[i]);
		i++;
	}
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
		j = i + 1;
		while (j < _elementsNbr)
		{
			diff = _v[i] - _v[j];
			if (diff < 0)
				diff *= -1;
			span = std::max(span, diff);
			j++;
		}
		i++;
	}
	return (span);
}

unsigned int Span::shortestSpan()
{
	bool first = true;
	int	currShortestSpan;
	int newSpan;
	int i, j;

	if (_elementsNbr == 0 || _elementsNbr == 1)
		throw std::string("Not enough elements to make a span calculus");
	i = 0;
	while (i < _elementsNbr - 1)
	{
		j = i + 1;
		while (j < _elementsNbr)
		{
			newSpan = _v[i] - _v[j];
			if (newSpan < 0)
				newSpan *= -1;
			if (first == true)
			{
				currShortestSpan = newSpan;
				first = false;
			}
			currShortestSpan = std::min(newSpan, currShortestSpan);
			std::cout << "Hola this is the :  " << currShortestSpan << std::endl;
			j++;
		}
		i++;
	}
	return (currShortestSpan);
}

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}
