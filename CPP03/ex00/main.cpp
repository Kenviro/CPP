/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:54:47 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/14 16:22:11 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap John("Jhon");
	ClapTrap Adoc("Adoc");

	John.attack((Adoc.getName()));
	Adoc.takeDamage(John.getAttackDamage());
	Adoc.beRepaired(12);
	John.beRepaired(3);

	return 0;
}
