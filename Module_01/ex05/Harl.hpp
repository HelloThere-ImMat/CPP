/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:15:29 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/14 16:26:09 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

# define DEBUG_MESSAGE		"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !"
# define INFO_MESSAGE		"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"
# define WARNING_MESSAGE	"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
# define ERROR_MESSAGE		"This is unacceptable ! I want to speak to the manager now."

class Harl
{
	private :
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public :
		void complain( std::string level );
		//typedef void (Harl::*ComplainFunc(void))
		//ComplainFunc[4];
		Harl();
		~Harl();

};