/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:54:47 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/16 10:44:07 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

int	main()
{
	ClapTrap a("Clappy");
	a.attack("enemy1");

	std::cout << "----------------------" << std::endl;

	ScravTrap b("Scrappy");
	b.attack("enemy2");
	b.guardGate();

	return 0;
}
