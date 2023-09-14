/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:57:25 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/14 17:04:41 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct Data
{
	int i;
	float f;
};

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