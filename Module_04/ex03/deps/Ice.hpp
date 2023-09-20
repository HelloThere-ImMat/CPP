/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:47:29 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/20 11:57:36 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice();
		Ice(const Ice &other);
		Ice &operator=(const Ice &other);
		Ice *clone() const;
		void use(ICharacter &target);
		~Ice();
};
