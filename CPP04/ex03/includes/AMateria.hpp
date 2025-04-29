/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:08:44 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/29 14:41:46 by ktintim-         ###   ########.fr       */
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
		virtual void use(ICharacter& target) = 0;
};

#endif