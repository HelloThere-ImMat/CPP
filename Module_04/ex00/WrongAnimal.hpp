/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:55:56 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/21 13:38:32 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
	public :
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator=(const WrongAnimal &other);
		void makeSound() const;
		std::string getType() const;
	protected :
		std::string _type;
};

#endif