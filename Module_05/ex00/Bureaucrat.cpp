#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat() : _name("Empty"), _grade(150)
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
	std::cout << "Bureaucrat specific constructor called" << std::endl;
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
	os << bureaucrat.get_name() << ", bureaucrat of grade " << bureaucrat.get_grade() << std::endl;
	return os;
}

//Member functs
const std::string &Bureaucrat::get_name() const
{
	return _name;
}
const int &Bureaucrat::get_grade() const
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

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Error: grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Error: grade too low";
}
