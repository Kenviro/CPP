/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:54:47 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/15 16:10:30 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

int	main()
{
	ScravTrap John("Jhon");
	ClapTrap Adoc("Adoc");

	John.attack((Adoc.getName()));
	Adoc.takeDamage(John.getAttackDamage());
	Adoc.beRepaired(12);
	John.beRepaired(3);

	John.guardGate();
	John.takeDamage(20);

	return 0;
}
