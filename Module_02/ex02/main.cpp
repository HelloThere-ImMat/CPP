/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:33:45 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/30 15:50:15 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed b( 10 );
	Fixed c( 42.42f );
	Fixed d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "a is " << a.toFloat() << "as a float" << std::endl;

	std::cout << "we must have a 0 : " << (a < b) << std::endl;
	std::cout << "we must have a 1 : " << (a > b) << std::endl;
	std::cout << "we must have a 0 : " << (b == c) << std::endl;
	std::cout << "we must have a 1 : " << (b != c) << std::endl;
	std::cout << "we must have a 1 : " << (b == d) << std::endl;
	std::cout << "we must have a 1 : " << (b <= d) << std::endl;

	std::cout << a + b << std::endl;
	std::cout << c * b << std::endl;
	std::cout << a / b << std::endl;
	std::cout << c - b << std::endl;

	b++;
	c++;
	std::cout << "Post-incremented b is " << b << std::endl;
	std::cout << "Post-incremented c is " << c << std::endl;
	return 0;
}