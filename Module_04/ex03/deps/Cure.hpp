/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:53:45 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/20 11:54:25 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


class Cure : public AMateria
{
	public :
		Cure();
		Cure(const Cure &other);
		Cure &operator=(const Cure &other);
		Cure *clone() const;
		void use(ICharacter &target);
		~Cure();
};
