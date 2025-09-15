/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:52:15 by ktintim           #+#    #+#             */
/*   Updated: 2025/09/15 11:10:22 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

int main(int ac, char** av)
{
	BitcoinExchange btc;
	std::ifstream input(av[1]);

	if (ac != 2 || input.is_open() == false)
	{
		std::cout << "Error: could not open file" << std::endl;
		return 1;
	}
	
	return 0;
}
