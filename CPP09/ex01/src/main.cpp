/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:53:24 by ktintim           #+#    #+#             */
/*   Updated: 2025/09/18 15:14:22 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

int main(int ac, char **av)
{
	std::string input(av[1]);
	RPN	rpn;

	if (ac != 2 || rpn.checkInput(input))
	{
		std::cout << "Error: non valid input" << std::endl;
		return 1;
	}

	std::cout << rpn.calcul(input) << std::endl;
}
