/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:52:44 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/14 16:56:21 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Base
{
	public:
		virtual ~Base();
		Base 	*generate(void);
		void	identify(Base *p);
		void	identify(Base &p);
};
