/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:46:39 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/26 11:49:12 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class ShruberryCreationForm : public AForm
{
	public :
		ShruberryCreationForm();
		ShruberryCreationForm(std::string target);
		~ShruberryCreationForm();
		ShruberryCreationForm(const ShruberryCreationForm &other);
		ShruberryCreationForm &operator=(const ShruberryCreationForm &assign);
		void	action() const;
	private :
		std::string _target;
};