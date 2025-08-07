/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 16:48:32 by kilian            #+#    #+#             */
/*   Updated: 2025/08/03 17:49:09 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BaseABC.hpp"
#include <iostream>
#include <cstdlib>

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

int	main()
{
	srand(time(0));
	Base* base1 = generate();
	Base* base2 = generate();
	Base* base3 = generate();

	identify(base1);
	identify(base2);
	identify(base3);
	identify(*base1);
	identify(*base2);
	identify(*base3);

	delete base1;
	delete base2;
	delete base3;
	return 0;
}
