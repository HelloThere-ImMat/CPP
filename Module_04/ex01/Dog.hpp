/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:58:38 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/21 13:46:40 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private :
		Brain *_brain;
	public :
		Dog();
		~Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		void makeSound() const;
		Brain	*get_brain() const;
};

#endif