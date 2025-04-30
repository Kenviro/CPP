/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:08:13 by kilian            #+#    #+#             */
/*   Updated: 2025/04/30 10:55:29 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	int i = 1;
	while (i < ac)
	{
		std::string str(av[i]);
		for (int j = 0; str[j]; j++)
		{
			std::cout << (char)std::toupper(str[j]);
		}
		std::cout << " ";
		i++;
	}
	std::cout << std::endl;
	return (0);
}
