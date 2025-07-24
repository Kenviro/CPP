/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 07:29:32 by kilian            #+#    #+#             */
/*   Updated: 2025/07/24 06:46:59 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>

class RobotomyRequest : public AForm{

	private:

		std::string _target;
		RobotomyRequest();
		RobotomyRequest& operator=(const RobotomyRequest& src);

	public:

		RobotomyRequest(std::string target);
		RobotomyRequest(const RobotomyRequest& cpy);
		~RobotomyRequest();
		
		std::string getTarget() const;
		void		execute(Bureaucrat const &executor) const;

};

#endif