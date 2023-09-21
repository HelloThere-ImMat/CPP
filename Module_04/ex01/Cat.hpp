/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:56:43 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/21 13:46:34 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private :
		Brain *_brain;
	public :
		Cat();
		~Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		void makeSound() const;
		Brain	*get_brain() const;
};

#endif