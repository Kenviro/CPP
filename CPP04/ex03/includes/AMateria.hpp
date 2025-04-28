/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:08:44 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/28 14:00:44 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "mHeader.hpp"

class AMateria
{
	protected:

		std::string _type;

	public:

		AMateria(std::string const & type);
		AMateria(const AMateria& cpy);
		AMateria& operator=(const AMateria& src);
		~AMateria();
		
		std::string const &getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif