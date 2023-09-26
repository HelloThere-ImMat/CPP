/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:51:51 by mat               #+#    #+#             */
/*   Updated: 2023/09/26 11:44:03 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

#include <AForm.hpp>

class AForm;

class Bureaucrat
{
	public:

		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(std::string _name, int _grade);
		~Bureaucrat();
		Bureaucrat & operator=(const Bureaucrat &assign);
		const std::string &get_name() const;
		const int &get_grade() const;
		void	increment();
		void	decrement();
		void	signForm(AForm &form);
		void	executeForm(AForm const &form);
		class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
	private:
		std::string _name;
		int _grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif
