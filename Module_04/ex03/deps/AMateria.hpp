/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:49:54 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/20 14:36:10 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected :
		std::string _type;
	public :
		AMateria(std::string const & type);
		AMateria(const AMateria &other);
		AMateria &operator=(const AMateria &assign);
		std::string const &getType() const; //Const before or after type is the same
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		virtual ~AMateria();
};
