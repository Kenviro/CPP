/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 00:46:14 by kilian            #+#    #+#             */
/*   Updated: 2025/04/08 00:50:50 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie* Zombie_1 = newZombie("Pedro");
	Zombie* Zombie_2 = newZombie("Jean");

	randomChump("Jessica");
	randomChump("Frederico");

	Zombie_1->announce();
	Zombie_2->announce();

	delete Zombie_1;
	delete Zombie_2;
	
	return (0);
}
