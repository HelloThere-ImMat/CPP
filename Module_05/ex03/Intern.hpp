/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:31:43 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/11 13:35:21 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SubForm.hpp"

class Intern
{
	public :
		Intern();
		Intern(Intern const &other);
		~Intern();
		Intern &operator=(const Intern &assign);
		AForm *makeForm(std::string formName, std::string formTarget);
};