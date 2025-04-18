/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:54:47 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/16 11:40:45 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap a("Clappy");
	a.attack("enemy1");
	a.takeDamage(12);

	std::cout << "----------------------" << std::endl;

	ScravTrap b("Scrappy");
	b.attack("enemy2");
	b.beRepaired(12);
	b.guardGate();

	std::cout << "----------------------" << std::endl;

	FragTrap c("Fraga");
	c.attack("Scrappy");
	c.takeDamage(15);
	c.highFivesGuys();

	
	return 0;
}
