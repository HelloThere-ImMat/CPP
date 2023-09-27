/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:57:25 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/27 15:15:10 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdint.h>

typedef struct s_data
{
	int i;
	float f;
}		Data;

class Serializer
{
	public :
		Serializer();
		Serializer(const Serializer &other);
		~Serializer();
		Serializer &operator=(const Serializer &assign);
		//Member functs
		uintptr_t 	serialize(Data * ptr);
		Data 		*deserialize(uintptr_t raw);
};