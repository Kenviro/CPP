/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 07:42:11 by kilian            #+#    #+#             */
/*   Updated: 2025/07/23 12:08:14 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Bureaucrat.hpp"

/***************************Constructor & Destructor****************************/

PresidentialPardon::PresidentialPardon() : AForm("Presidential pardon", 25, 5), _target("Duh")
{
}

PresidentialPardon::PresidentialPardon(std::string target) : AForm("Presidential pardon", 25, 5), 
															_target(target)
{

}

PresidentialPardon::PresidentialPardon(const PresidentialPardon& cpy) : 
	AForm(cpy.getName(), cpy.getSignedGrade(), cpy.getExecuteGrade()), _target(cpy.getTarget())
{
	
}

PresidentialPardon &PresidentialPardon::operator=(const PresidentialPardon& src)
{
	if (this != &src)
	{
		
	}
	return *this;
}

PresidentialPardon::~PresidentialPardon()
{
	
}

/********************************Getter & Setter********************************/

std::string PresidentialPardon::getTarget() const 
{
	return _target;
}

/*********************************Member function*******************************/

void PresidentialPardon::execute(Bureaucrat const &executor) const
{
	if (!getIsSigned())
		throw UnsignedFormException();
	if (executor.getGrade() > getExecuteGrade())
		throw GradeTooLowException();
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox. :D" << std::endl;
}
