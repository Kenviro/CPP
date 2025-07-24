/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 06:53:14 by kilian            #+#    #+#             */
/*   Updated: 2025/07/23 12:08:47 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>
# define TREE "       ,.,\n      MMMM_    ,..,\n        \"_ \"__\"MMMMM          ,...,,\n ,..., __.\" --\"    ,.,     _-\"MMMMMMM\nMMMMMM\"___ \"_._   MMM\"_.\"\" _ \"\"\"\"\"\"\n \"\"\"\"\"    \"\" , \\_.   \"_. .\"\n        ,., _\"__ \\__./ .\"\n       MMMMM_\"  \"_    ./\n        ''''      (    )\n ._______________.-'____\"---._.\n  \\                          /\n   \\________________________/\n   (_)                    (_)"

class ShrubberyCreation : public AForm {

	private:

		std::string	_target;
		ShrubberyCreation();
		ShrubberyCreation& operator=(const ShrubberyCreation& src);

	public:

		ShrubberyCreation(std::string target);
		ShrubberyCreation(const ShrubberyCreation& cpy);
		~ShrubberyCreation();

		std::string getTarget() const;
		void		execute(Bureaucrat const &executor) const;

};

#endif