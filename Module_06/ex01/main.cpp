/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:50:29 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/27 15:17:47 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Serializer	s;
	Data *data = new Data;
	Data *data2;
	uintptr_t	intPTR;

	data->i = 42;
	data->f = 42.24f;

	std::cout << "Original pointer int value : " << data->i << std::endl;
	std::cout << "Original pointer float value : " << data->f << std::endl;
	intPTR = s.serialize(data);

	std::cout << "The ptr as an int is " << intPTR << std::endl;
	data2 = s.deserialize(intPTR);
	std::cout << "Deserialize pointer int value : " << data2->i << std::endl;
	std::cout << "Deserialize pointer float value : " << data2->f << std::endl;
	delete data;
	return (0);
}