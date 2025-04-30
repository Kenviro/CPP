/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:08:44 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/30 10:47:19 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <string>
#include <iostream>
class ICharacter;

class AMateria
{
	protected:

		std::string _type;

	public:

		AMateria(std::string const & type);
		AMateria(const AMateria& cpy);
		AMateria& operator=(const AMateria& src);
		virtual ~AMateria();
		
		std::string const &getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif