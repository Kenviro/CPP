/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:02:24 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/28 14:05:40 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CURE_HPP
# define CURE_HPP

#include "mHeader.hpp"

class Cure : public AMateria {

	public:

		Cure();
		Cure(const Ice& cpy);
		Cure& operator=(const Cure& src);
		~Cure();

		void use(ICharacter& target);

};

#endif