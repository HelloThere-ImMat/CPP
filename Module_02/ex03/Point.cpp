/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 09:19:19 by mat               #+#    #+#             */
/*   Updated: 2023/09/07 10:47:36 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point() : x(Fixed(0)), y(Fixed(0))
{
	std::cout << "Point default constructor called" << std::endl;
}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y))
{
	std::cout << "Point specified constructor called" << std::endl;
}

Point::~Point()
{
	std::cout << "Point default destructor called" << std::endl;
}

Point::Point(const Point &other) : x(other.x), y(other.y)
{
	std::cout << "Point copy constructor called" << std::endl;
}

Fixed	Point::getX() const
{
	return (this->x);
}

Fixed	Point::getY() const
{
	return (this->y);
}
