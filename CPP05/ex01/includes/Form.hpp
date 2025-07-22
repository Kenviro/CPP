/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 19:47:10 by kilian            #+#    #+#             */
/*   Updated: 2025/07/21 12:23:41 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>

class Bureaucrat;

class Form {

	private:

		const std::string _name;
		const int	_gradeToSigne;
		const int	_gradeToExecute;
		bool	_signed;

		Form();
		Form& operator=(const Form& src);

	public:

		Form(std::string name, int gradeToSigne, int gradeToExecute);
		Form(const Form& cpy);
		~Form();
		
		std::string	getName() const;
		int			getSignedGrade() const;
		int			getExecuteGrade() const;
		void		beSigned(Bureaucrat& signerMan);

		class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream& stream, const Form& b);

#endif