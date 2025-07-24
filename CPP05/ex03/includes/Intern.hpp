/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 06:57:28 by kilian            #+#    #+#             */
/*   Updated: 2025/07/24 07:39:23 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern {

	private:

		AForm* makeSC(std::string target) const;
		AForm* makeRR(std::string target) const;
		AForm* makePP(std::string target) const;

	public:

		Intern();
		Intern(const Intern& cpy);
		Intern& operator=(const Intern& src);
		~Intern();

		AForm*	makeForm(std::string formType, std::string formName);

		typedef AForm* (Intern::*f)(std::string) const;

};

#endif