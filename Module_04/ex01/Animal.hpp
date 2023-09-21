/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:18:08 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/21 13:44:18 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "Brain.hpp"

class Animal
{
	public :
		Animal();
		virtual ~Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual void makeSound() const;
		const std::string &getType() const;
	protected :
		std::string _type;
};

#endif
