/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:42:59 by mat               #+#    #+#             */
/*   Updated: 2023/09/08 13:54:25 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
	protected :
		const std::string	_name;
		bool				_isSigned;
		int					_signGrade;
		int					_execGrade;
	public :
	//Constructors
		AForm();
		AForm(std::string name, int signGrade, int execGrade);
		AForm(const AForm &other);
	//Destructor
		virtual ~AForm();
	//Overloaded operator
		AForm &operator=(const AForm &assign);
	//Member functs
		void		beSigned(const Bureaucrat &bureaucrat);
		std::string	getName() const;
		bool		getSignedBool() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
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

std::ostream &operator<<(std::ostream &os, const AForm &form);

#endif
