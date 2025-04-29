/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:02:24 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/29 14:28:32 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {

	public:

		Cure();
		Cure(const Cure& cpy);
		Cure& operator=(const Cure& src);
		~Cure();

		void		use(ICharacter& target);
		AMateria*	clone() const;

};

#endif