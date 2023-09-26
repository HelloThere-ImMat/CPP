/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:52:13 by mat               #+#    #+#             */
/*   Updated: 2023/09/08 14:07:25 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//Constructors

AForm::AForm() : _name("Default")
{
	_signGrade = 150;
	_execGrade = 150;
	_isSigned = false;
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name)
{
	if (signGrade > 150 || execGrade > 150 || signGrade < 1 || execGrade < 1)
	{
		std::cerr << "Error while creating AForm : ";
		if (signGrade > 150 || execGrade > 150)
			throw GradeTooLowException();
		else
			throw GradeTooHighException();

	}
	_signGrade = signGrade;
	_execGrade = execGrade;
	_isSigned = false;
	std::cout << "AForm specified constructor called" << std::endl;
}

AForm::AForm(const AForm &other) : _name(other._name)
{
	_signGrade = other._signGrade;
	_execGrade = other._execGrade;
	_isSigned = other._isSigned;
	std::cout << "AForm copy constructor called" << std::endl;
}

//Destructor

AForm::~AForm()
{
	std::cout << "AForm default destructor called" << std::endl;
}

//Overloaded operator

AForm &AForm::operator=(const AForm &assign)
{
	_signGrade = assign._signGrade;
	_execGrade = assign._execGrade;
	_isSigned = assign._isSigned;
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const AForm &form)
{
	os << "AForm name : " << form.getName() << std::endl;
	os << "AForm signed bool : " << form.getSignedBool() << std::endl;
	os << "Required grade to sign : " << form.getSignGrade() << std::endl;
	os << "Required grade to exec : " << form.getExecGrade() << std::endl;
	return (os);
}

//Member functs

void		AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.get_grade() > this->_signGrade)
		throw GradeTooLowException();
	else if (this->_isSigned == true)
		throw AllreadySignedException();
	this->_isSigned = true;
}

void		AForm::execute(Bureaucrat const &executor) const
{
	if (executor.get_grade() > this->_execGrade)
		throw GradeTooLowException();
	else if (this->_isSigned == false)
		throw NotSignedException();
	else
		this->action();
}

const std::string	&AForm::getName() const
{
	return (_name);
}

const bool			&AForm::getSignedBool() const
{
	return (_isSigned);
}

const int			&AForm::getSignGrade() const
{
	return (_signGrade);
}

const int			&AForm::getExecGrade() const
{
	return (_execGrade);
}

//Exceptions

const char* AForm::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

const char* AForm::AllreadySignedException::what() const throw()
{
	return "This form is allready signed";
}

const char* AForm::NotSignedException::what() const throw()
{
	return "This form needs to be signed";
}