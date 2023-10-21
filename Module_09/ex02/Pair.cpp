/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pair.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:21:09 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/21 13:10:33 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pair.hpp"

Pair::Pair(const Pair &other)
{
	*this = other;
}

Pair	&Pair::operator=(const Pair &assign)
{
	_small = assign._small;
	_big = assign._big;
	return (*this);
}

bool	Pair::operator<(const Pair &other) const
{
	if (this->_big == -1)
		return (false);
	else if (other._big == -1)
		return (true);
	else
		return (this->_big < other._big);
}
