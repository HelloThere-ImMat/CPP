/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:18:08 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/05 14:49:42 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMALS_HPP
# define ANIMALS_HPP


#include "Brains.hpp"
#include <iostream>

class Animal
{
	public :
		Animal();
		virtual ~Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual void makeSound() const;
		std::string getType() const;
		Brain	*getBrain(void) const;
	protected :
		std::string _type;
		Brain		*_brain;
};

class Dog : public Animal
{
	public :
		Dog();
		~Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		void makeSound() const;
};

class Cat : public Animal
{
	public :
		Cat();
		~Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		void makeSound() const;
};

#endif
