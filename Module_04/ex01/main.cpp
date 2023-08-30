/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:07:21 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/30 17:06:29 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

int main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* k = new Cat();
	k = i;
	delete j;//should not create a leak
	delete i;
	delete k;
}
