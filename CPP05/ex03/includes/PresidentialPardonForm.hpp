/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 07:41:19 by kilian            #+#    #+#             */
/*   Updated: 2025/07/23 12:08:55 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardon : public AForm {

	private:

		std::string _target;
		PresidentialPardon();
		PresidentialPardon& operator=(const PresidentialPardon& src);

	public:

		PresidentialPardon(std::string target);
		PresidentialPardon(const PresidentialPardon& cpy);
		~PresidentialPardon();

		std::string getTarget() const;
		void	execute(Bureaucrat const &executor) const;
};

#endif