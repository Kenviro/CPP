/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:08:22 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/30 10:47:42 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CHARACTER_HP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {

	private:

		std::string	name;
		AMateria*	inventory[4];
		AMateria*	unequiped[100];
		int			unequipedCount;
		int			equipedCount;

		Character();

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