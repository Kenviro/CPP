/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 19:47:10 by kilian            #+#    #+#             */
/*   Updated: 2025/07/23 07:22:31 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

# include <string>
# include <iostream>

class Bureaucrat;

class AForm {

	private:

		const std::string _name;
		const int	_gradeToSigne;
		const int	_gradeToExecute;
		bool		_signed;

		AForm();
		AForm& operator=(const AForm& src);

	public:

		AForm(std::string name, int gradeToSigne, int gradeToExecute);
		AForm(const AForm& cpy);
		virtual ~AForm();
		
		std::string	getName() const;
		int			getSignedGrade() const;
		int			getExecuteGrade() const;
		bool		getIsSigned() const;
		void		beSigned(Bureaucrat& signerMan);
		virtual void execute(Bureaucrat const& executor) const = 0;

		class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
		};

		class UnsignedFormException : public std::exception {
		public:
			const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream& stream, const AForm& b);

#endif