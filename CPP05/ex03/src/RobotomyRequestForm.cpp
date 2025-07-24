/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 07:31:32 by kilian            #+#    #+#             */
/*   Updated: 2025/07/24 06:46:00 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/Bureaucrat.hpp"

/***************************Constructor & Destructor****************************/

RobotomyRequest::RobotomyRequest() : AForm("RobotomyRequest", 72, 45), _target("Duh")
{
}

RobotomyRequest::RobotomyRequest(std::string target) : AForm("RobotomyRequest", 72, 45), _target(target)
{

}

RobotomyRequest::RobotomyRequest(const RobotomyRequest& cpy) : 
	AForm(cpy.getName(), cpy.getSignedGrade(), cpy.getExecuteGrade()), _target(cpy.getTarget())
{
	
}

RobotomyRequest &RobotomyRequest::operator=(const RobotomyRequest& src)
{
	if (this != &src)
	{
		
	}
	return *this;
}

RobotomyRequest::~RobotomyRequest()
{
	
}

/********************************Getter & Setter********************************/

std::string RobotomyRequest::getTarget() const
{
	return _target;
}

/*********************************Member function*******************************/

void RobotomyRequest::execute(Bureaucrat const &executor) const
{
	if (!getIsSigned())
		throw UnsignedFormException();
	if (executor.getGrade() > getExecuteGrade())
		throw GradeTooLowException();
	srand(time(0));
	int randNumber = rand() % 2;
	if (randNumber == 0)
		std::cout << _target << " has been succefully robotomized";
	else
		std::cout << "the robotomization of " << _target << " have failed";
	std::cout << std::endl;
}
