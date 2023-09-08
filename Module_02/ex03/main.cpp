/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:33:45 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/07 11:12:09 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {

	Point a(2, 1);
	Point b(3, 4);
	Point c(5, 2);

	Point t1(3, 2);
	Point t2(6, 3);

	bool test1 = bsp(a, b, c, t1);
	bool test2 = bsp(a, b, c, t2);

	std::cout << std::endl;
	std::cout << "Should be 1 : " << test1 << std::endl;
	std::cout << "Should be 0 : " << test2 << std::endl;
	std::cout << std::endl;
}
