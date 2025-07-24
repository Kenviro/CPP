/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 06:55:41 by kilian            #+#    #+#             */
/*   Updated: 2025/07/24 06:45:27 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Bureaucrat.hpp"

/***************************Constructor & Destructor****************************/

ShrubberyCreation::ShrubberyCreation() : AForm("Shrubbery", 145, 137), _target("Duh")
{
}

ShrubberyCreation::ShrubberyCreation(std::string target) : AForm("Shrubbery", 145, 137), _target(target)
{

}

ShrubberyCreation::ShrubberyCreation(const ShrubberyCreation& cpy) : 
		AForm(cpy.getName(), cpy.getSignedGrade(), cpy.getExecuteGrade()), _target(cpy.getTarget())
{
	
}

ShrubberyCreation &ShrubberyCreation::operator=(const ShrubberyCreation& src)
{
	if (this != &src)
	{
		
	}
	return *this;
}

ShrubberyCreation::~ShrubberyCreation()
{
	
}

/********************************Getter & Setter********************************/

std::string ShrubberyCreation::getTarget() const
{
	return _target;
}

/*********************************Member function*******************************/

void ShrubberyCreation::execute(Bureaucrat const &executor) const
{
	std::string	fileName(_target + "_shrubbery");
	std::ofstream Shrubbery(fileName.c_str());

	if (!getIsSigned())
		throw UnsignedFormException();
	if (executor.getGrade() > getExecuteGrade())
		throw GradeTooLowException();
	Shrubbery << TREE;
	Shrubbery.close();
}
