/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:52:13 by mat               #+#    #+#             */
/*   Updated: 2023/09/26 11:40:52 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//Constructors

Form::Form() : _name("Default")
{
	_signGrade = 150;
	_execGrade = 150;
	_isSigned = false;
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name)
{
	if (signGrade > 150 || execGrade > 150 || signGrade < 1 || execGrade < 1)
	{
		std::cerr << "Error while creating Form : ";
		if (signGrade > 150 || execGrade > 150)
			throw GradeTooLowException();
		else
			throw GradeTooHighException();

	}
	_signGrade = signGrade;
	_execGrade = execGrade;
	_isSigned = false;
	std::cout << "Form specific constructor called" << std::endl;
}

Form::Form(const Form &other) : _name(other._name)
{
	_signGrade = other._signGrade;
	_execGrade = other._execGrade;
	_isSigned = other._isSigned;
	std::cout << "Form copy constructor called" << std::endl;
}

//Destructor

Form::~Form()
{
	std::cout << "Form default destructor called" << std::endl;
}

//Overloaded operator

Form &Form::operator=(const Form &assign)
{
	_signGrade = assign._signGrade;
	_execGrade = assign._execGrade;
	_isSigned = assign._isSigned;
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << "Form name : " << form.getName() << std::endl;
	os << "Form signed bool : " << form.getSignedBool() << std::endl;
	os << "Required grade to sign : " << form.getSignGrade() << std::endl;
	os << "Required grade to exec : " << form.getExecGrade() << std::endl;
	return (os);
}

//Member functs

void		Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.get_grade() > this->_signGrade)
		throw GradeTooLowException();
	else if (this->_isSigned == true)
		throw AllreadySigned();
	this->_isSigned = true;
}

const std::string	&Form::getName() const
{
	return (_name);
}

const bool		&Form::getSignedBool() const
{
	return (_isSigned);
}

const int			&Form::getSignGrade() const
{
	return (_signGrade);
}

const int			&Form::getExecGrade() const
{
	return (_execGrade);
}

//Exceptions

const char* Form::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

const char* Form::AllreadySigned::what() const throw()
{
	return "This form is allready signed";
}
