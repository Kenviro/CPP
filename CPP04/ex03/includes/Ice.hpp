/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:17:52 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/29 14:16:57 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {

	public:

		Ice();
		Ice(const Ice& cpy);
		Ice& operator=(const Ice& src);
		~Ice();

		void		use(ICharacter& target);
		AMateria*	clone() const;

};

#endif