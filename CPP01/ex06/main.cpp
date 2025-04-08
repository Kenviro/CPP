/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 00:30:33 by kilian            #+#    #+#             */
/*   Updated: 2025/04/09 01:08:01 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{	
	Harl harl;

	if (ac < 2)
	{
		std::cout << "write an argument please D;" << std::endl;
		return (1);
	}
	
	std::string level = av[1];
	harl.complain(level);
	
	return (0);
}
