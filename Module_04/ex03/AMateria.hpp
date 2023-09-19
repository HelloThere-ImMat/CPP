/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:49:54 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/19 12:56:28 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"

class AMateria
{
	protected :
		std::string _type;
	public :
		AMateria(std::string const & type);
		~AMateria();
		std::string const &getType() const; //Const before or after type is the same
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif