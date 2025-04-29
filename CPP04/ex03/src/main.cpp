/* ****************** ******************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:02:11 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/29 16:06:57 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/IMateriaSource.hpp"
#include "../includes/AMateria.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include "../includes/ICharacter.hpp"
#include "../includes/Character.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "----------------------------------------------" << std::endl;

	ICharacter *bill = bob;
	bill->equip(src->createMateria("ice"));
	bill->equip(src->createMateria("ice"));
	bill->equip(src->createMateria("ice"));
	bill->equip(src->createMateria("ice"));
	bill->equip(src->createMateria("ice"));
	Character billbob("billbob");
	billbob.equip(src->createMateria("cure"));
	Character bobbill("bobbill");
	bobbill.equip(src->createMateria("ice"));
	bobbill = billbob;
	bobbill.use(0, billbob);
	bobbill.equip(src->createMateria("ice"));
	bobbill.equip(src->createMateria("cure"));
	bobbill.equip(src->createMateria("ice"));
	bobbill.equip(src->createMateria("cure"));
	bobbill.equip(src->createMateria("ice"));
	bobbill.use(2, *bill);
	me->unequip(0);
	bobbill.unequip(2);
	me->unequip(3);
	me->use(3, *bob);
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("ice"));
	bob->equip(src->createMateria("cure"));
	bob->equip(src->createMateria("cure"));
	bob->use(0, *me);
	me->use(3, billbob);
	me->unequip(0);

	delete bob;
	delete me;
	delete src;
}