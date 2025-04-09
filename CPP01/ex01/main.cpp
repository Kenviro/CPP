/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 10:16:55 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/09 10:55:01 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int N = 10;
	Zombie* Horde;
	
	Horde = zombieHorde(N, "Pedro");
	for (int i = 0; i < N; i++)
	{
		Horde[i].announce();
	}
	delete[] Horde;
	return (1);
}