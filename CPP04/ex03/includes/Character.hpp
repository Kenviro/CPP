/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:08:22 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/28 16:00:12 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "mHeader.hpp"

class Character : public ICharacter {

	private:

		std::string	name;
		AMateria*	inventory[4];
		AMateria*	unequiped[100];
		int			unequipedCount;
		int			equipedCount;

	public:

		Character(std::string _name);
		Character(const Character& cpy);
		Character& operator=(const Character& src);
		~Character();

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

};

#endif