/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 13:28:05 by kilian            #+#    #+#             */
/*   Updated: 2025/08/03 13:32:45 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvertor.hpp"

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Please give me an argument to convert" << std::endl;
		return -1;
	}
	if (ac > 2)
	{
		std::cout << "It's too much argument give me one at a time" << std::endl;
		return -1;
	}

	std::string s(av[1]);
	ScalarConvertor::convert(s);
	return 0;
}
