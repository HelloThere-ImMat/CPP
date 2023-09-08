/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 09:36:53 by mat               #+#    #+#             */
/*   Updated: 2023/09/07 11:11:23 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float dAB;
	float dBC;
	float dCA;

	dAB = (a.getX() - point.getX()).toFloat() * (b.getY() - point.getY()).toFloat() - (a.getY() - point.getY()).toFloat() * (b.getX() - point.getX()).toFloat();
	dBC = (b.getX() - point.getX()).toFloat() * (c.getY() - point.getY()).toFloat() - (b.getY() - point.getY()).toFloat() * (c.getX() - point.getX()).toFloat();
	dCA = (c.getX() - point.getX()).toFloat() * (a.getY() - point.getY()).toFloat() - (c.getY() - point.getY()).toFloat() * (a.getX() - point.getX()).toFloat();

	return ((dAB <= 0 && dBC <= 0 && dCA <= 0) || (dAB > 0 && dBC > 0 && dCA > 0));
	//if (d1 <= 0 && d2 <= 0 && d3 <= 0)
	//	return (true);
	//else if (d1 > 0 && d2 > 0 && d3 > 0)
	//	return (true);
	//return (false);
}
