/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:54:07 by kilian            #+#    #+#             */
/*   Updated: 2025/07/23 12:17:09 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "AForm.hpp"

class AForm;

class Bureaucrat {

	private:

		int			_grade;
		const std::string _name;
		Bureaucrat();

	public:

		Bureaucrat(int grade, std::string name);
		Bureaucrat(const Bureaucrat& cpy);
		Bureaucrat& operator=(const Bureaucrat& src);
		~Bureaucrat();

		std::string	getName() const;
		int			getGrade() const;

		void		signForm(AForm& form);
		void		executeForm(AForm const &form) const;
		void		gradePlusPlus();
		void		gradeMinusMinus();
		void		gradePlusSmth(int x);
		void		gradeMinusSmth(int x);

		class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream& stream, const Bureaucrat& b);

#endif