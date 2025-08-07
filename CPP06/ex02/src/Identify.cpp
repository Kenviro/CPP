/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 16:48:18 by kilian            #+#    #+#             */
/*   Updated: 2025/08/03 17:52:42 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BaseABC.hpp"
#include <cstdlib>
#include <iostream>

Base* generate(void)
{
	int	random = rand() % 3;

	// std::cout << "the number is " << random << std::endl;
	if (random == 0)
		return new A;
	else if (random == 1)
		return new B;
	else
		return new C;
}

void identify(Base* p)
{
	if (p == dynamic_cast<A*>(p))
		std::cout << "It's an A object" << std::endl;
	if (p == dynamic_cast<B*>(p))
		std::cout << "It's an B object" << std::endl;
	if (p == dynamic_cast<C*>(p))
		std::cout << "It's an C object" << std::endl;
}

void identify(Base& p)
{
	if (&p == dynamic_cast<A*>(&p))
		std::cout << "It's an A object" << std::endl;
	if (&p == dynamic_cast<B*>(&p))
		std::cout << "It's an B object" << std::endl;
	if (&p == dynamic_cast<C*>(&p))
		std::cout << "It's an C object" << std::endl;
}
