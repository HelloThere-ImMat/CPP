/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:48:25 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/20 14:04:39 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

#define SRCS_NBR 4

class MateriaSource : public IMateriaSource
{
	private :
		AMateria *_srcs[SRCS_NBR];
	public :
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		MateriaSource &operator=(const MateriaSource &assign);
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
		~MateriaSource();
};
