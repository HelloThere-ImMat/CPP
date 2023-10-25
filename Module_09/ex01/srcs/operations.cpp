/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:01:22 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/25 16:06:47 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int addition(int nb1, int nb2)
{
	if (nb1 > INT_MAX - nb2)
		throw ("Int overflow in addition");
	return (nb1 + nb2);
}

int soustraction(int nb1, int nb2)
{
	if (nb1 < INT_MIN + nb2)
		throw ("Int underflow in soustraction");
	return (nb2 - nb1);
}

int division(int nb1, int nb2)
{
	if (nb1 == 0)
		throw ("Division by 0");
	return (nb2 / nb1);
}

int multiplication(int nb1, int nb2)
{
	if (nb1 > INT_MAX / nb2)
		throw ("Int overflow in multiplication");
	return (nb1 * nb2);
}

int error(int nb1, int nb2)
{
	(void)nb1;
	(void)nb2;
	throw ("Unknown operator");
}
