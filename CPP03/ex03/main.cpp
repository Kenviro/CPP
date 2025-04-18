/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:54:47 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/16 16:06:02 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScravTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	// Test ClapTrap
	ClapTrap a("Clappy");
	a.attack("enemy1");
	a.takeDamage(12);

	std::cout << "----------------------" << std::endl;

	// Test ScravTrap
	ScravTrap b("Scrappy");
	b.attack("enemy2");
	b.beRepaired(12);
	b.guardGate();

	std::cout << "----------------------" << std::endl;

	// Test FragTrap
	FragTrap c("Fraga");
	c.attack("Scrappy");
	c.takeDamage(15);
	c.highFivesGuys();

	std::cout << "----------------------" << std::endl;

	// Test DiamondTrap
	DiamondTrap d("crazy_Diamondo");
	d.attack("enemy3");
	d.takeDamage(10);
	d.whoAmI();
	d.highFivesGuys();  // FragTrap function
	d.guardGate();      // ScravTrap function
	d.beRepaired(5);

	std::cout << "----------------------" << std::endl;

	return 0;
}