/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 19:47:59 by kilian            #+#    #+#             */
/*   Updated: 2025/07/22 07:01:51 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"

/***************************Constructor & Destructor****************************/

Form::Form() : _name(NULL), _gradeToSigne(-1),  _gradeToExecute(-1)
{
}

Form::Form(std::string name, int gradeToSigne, int gradeToExecute) : _name(name), 
																_gradeToSigne(gradeToSigne), 
																_gradeToExecute(gradeToExecute), 
																_signed(false)
{
	// std::cout << "Form " << name << " created" << std::endl;
	if (gradeToSigne < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSigne > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& cpy) : _name(cpy._name), _gradeToSigne(cpy._gradeToSigne), 
							_gradeToExecute(cpy._gradeToExecute), _signed(false)
{

}

Form &Form::operator=(const Form& src)
{
	if (this != &src)
	{
		
	}
	return *this;
}

Form::~Form()
{
	
}


/********************************Getter & Setter********************************/

std::string	Form::getName() const
{
	return _name;
}

int	Form::getSignedGrade() const
{
	return _gradeToSigne;
}

int	Form::getExecuteGrade() const
{
	return _gradeToExecute;
}

/*********************************Member function*******************************/

void	Form::beSigned(Bureaucrat& signerMan)
{
	if (signerMan.getGrade() <= _gradeToSigne)
	{
		_signed = true;	
	}
	else
		throw GradeTooLowException();
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

std::ostream &operator<<(std::ostream &stream, const Form& b)
{
	stream << "Form " << b.getName() << " need " << b.getSignedGrade() << " to be signed and "
			<< b.getExecuteGrade() << " to be executed";
	return stream;
}
