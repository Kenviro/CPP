/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 19:47:59 by kilian            #+#    #+#             */
/*   Updated: 2025/07/22 07:01:51 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"

/***************************Constructor & Destructor****************************/

AForm::AForm() : _name(NULL), _gradeToSigne(-1),  _gradeToExecute(-1)
{
}

AForm::AForm(std::string name, int gradeToSigne, int gradeToExecute) : _name(name), 
																_gradeToSigne(gradeToSigne), 
																_gradeToExecute(gradeToExecute), 
																_signed(false)
{
	// std::cout << "AForm " << name << " created" << std::endl;
	if (gradeToSigne < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSigne > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm& cpy) : _name(cpy._name), _gradeToSigne(cpy._gradeToSigne), 
							_gradeToExecute(cpy._gradeToExecute), _signed(false)
{

}

AForm &AForm::operator=(const AForm& src)
{
	if (this != &src)
	{
		
	}
	return *this;
}

AForm::~AForm()
{
	
}


/********************************Getter & Setter********************************/

std::string	AForm::getName() const
{
	return _name;
}

int	AForm::getSignedGrade() const
{
	return _gradeToSigne;
}

int	AForm::getExecuteGrade() const
{
	return _gradeToExecute;
}

bool AForm::getIsSigned() const
{
	return _signed;
}

/*********************************Member function*******************************/

void	AForm::beSigned(Bureaucrat& signerMan)
{
	if (signerMan.getGrade() <= _gradeToSigne)
	{
		_signed = true;	
	}
	else
		throw GradeTooLowException();
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char* AForm::UnsignedFormException::what() const throw()
{
	return "This form isn't signed";
}

std::ostream &operator<<(std::ostream &stream, const AForm& b)
{
	stream << "Form " << b.getName() << " need " << b.getSignedGrade() << " to be signed and "
			<< b.getExecuteGrade() << " to be executed";
	return stream;
}
