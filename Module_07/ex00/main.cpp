/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:18:58 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/14 18:17:05 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	int a = 3;
	int b = 5;
	char c = 'c';
	char d = 'd';
	std::string e = "test1";
	std::string f = "test2";

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	swap(a, b);
	swap(c, d);
	std::cout << "SWAP" << std::endl;
	std::cout << "a is now " << a << std::endl;
	std::cout << "b is now " << b << std::endl;
	std::cout << "c is now " << c << std::endl;
	std::cout << "d is now " << d << std::endl;
	std::cout << "max of " << a << " and " << b << " is " << max(a, b) << std::endl;
	std::cout << "max of " << c << " and " << d << " is " << max(c, d) << std::endl;
	std::cout << "min of " << a << " and " << b << " is " << min(a, b) << std::endl;
	std::cout << "min of " << c << " and " << d << " is " << min(c, d) << std::endl;
	std::cout << "min of " << e << " and " << f << " is " << min(e, f) << std::endl;
}

//int main( void )
//{
//	int a = 2;
//	int b = 3;
//	swap( a, b );
//	std::cout << "a = " << a << ", b = " << b << std::endl;
//	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
//	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
//	std::string c = "chaine1";
//	std::string d = "chaine2";
//	swap(c, d);
//	std::cout << "c = " << c << ", d = " << d << std::endl;
//	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
//	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
//	return 0;
//}