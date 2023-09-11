#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	_name = "";
	_grade = 0;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	_name = name;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
	std::cout << "Bureaucrat specified constructor called" << std::endl;
}


// Destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat default destructor called" << std::endl;
}


// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	_name = assign._name;
	_grade = assign._grade;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.get_name() << ", bureaucrat grade " << bureaucrat.get_grade();
	return os;
}

//Member functs
std::string Bureaucrat::get_name() const
{
	return _name;
}
int Bureaucrat::get_grade() const
{
	return _grade;
}

void	Bureaucrat::increment()
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	(this->_grade)++;
}

void Bureaucrat::decrement()
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	(this->_grade)--;
}

void	Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " could not sign form because : ";
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << this->_name << " could not execute form because : ";
		std::cerr << e.what() << std::endl;
	}
}

//Exceptions

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Error: Bureaucrat grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Error: Bureaucrat grade too low";
}
