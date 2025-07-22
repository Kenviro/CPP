/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucraft.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:55:30 by kilian            #+#    #+#             */
/*   Updated: 2025/07/21 07:08:01 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

/***************************Constructor & Destructor****************************/

Bureaucrat::Bureaucrat() {};

Bureaucrat::Bureaucrat(int grade, std::string name) : _grade(grade), _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	// std::cout << "Bureaucrat " << name << " hired !" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& cpy) : _name(cpy.getName())
{
	_grade = cpy.getGrade();
	// std::cout << "Bureaucrat " << _name << " cloned !" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& src)
{
	if (this != &src)
	{
		_grade = src.getGrade();
		// std::cout << "Bureaucrat " << _name << " copied !" << std::endl;
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "Bureaucrat " << _name << " fired" << std::endl;
}


/********************************Getter & Setter********************************/

std::string Bureaucrat::getName() const
{
	return _name;
}

int	Bureaucrat::getGrade() const
{
	return _grade;
}

/*********************************Member function*******************************/

void	Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << getName() << " cannot signe " << form.getName() << \
					" because " << e.what() << std::endl;
	}
}

void	Bureaucrat::gradePlusPlus()
{
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	_grade--;
}

void	Bureaucrat::gradeMinusMinus()
{
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	_grade++;
}

void	Bureaucrat::gradePlusSmth(int x)
{
	if (_grade - x < 1)
		throw GradeTooHighException();
	_grade -= x;
}

void	Bureaucrat::gradeMinusSmth(int x)
{
	if (_grade + x > 150)
		throw GradeTooLowException();
	_grade += x;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high. You're not that good";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low. Are you that bad ?";
}

std::ostream &operator<<(std::ostream &stream, const Bureaucrat& b)
{
	stream << b.getName() << ", bureaucrat grade " << b.getGrade();
	return stream;
}
