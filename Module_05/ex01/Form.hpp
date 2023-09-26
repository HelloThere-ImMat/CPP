/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:42:59 by mat               #+#    #+#             */
/*   Updated: 2023/09/26 11:40:16 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	private :
		const std::string	_name;
		bool				_isSigned;
		int					_signGrade;
		int					_execGrade;
	public :
	//Constructors
		Form();
		Form(std::string name, int signGrade, int execGrade);
		Form(const Form &other);
	//Destructor
		~Form();
	//Overloaded operator
		Form &operator=(const Form &assign);
	//Member functs
		void				beSigned(const Bureaucrat &bureaucrat);
		const std::string	&getName() const;
		const bool			&getSignedBool() const;
		const int			&getSignGrade() const;
		const int			&getExecGrade() const;
	//Exeptions
		class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class AllreadySigned: public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif
