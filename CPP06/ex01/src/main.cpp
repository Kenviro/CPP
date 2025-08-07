/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 14:57:54 by kilian            #+#    #+#             */
/*   Updated: 2025/08/03 15:13:45 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Serializer.hpp"

void	printData(Data p)
{
	std::cout << "j = " << p.j << std::endl;
	std::cout << "d = " << p.d << std::endl;
	std::cout << "v = " << p.v << std::endl;
}

int	main()
{
	Data Bob;
	
	Bob.j = 10;
	Bob.d = 't';
	Bob.v = 42.42;
	std::cout << "Bob data" << std::endl;
	printData(Bob);
	
	Data* Bobptr = Serializer::deserialize(Serializer::serialize(&Bob));
	std::cout << "Bobptr data" << std::endl;
	printData(*Bobptr);

	Data Bobby;
	Bobby.j = 70;
	Bobby.d = '~';
	Bobby.v = -70.587;
	std::cout << "Bobby data" << std::endl;
	printData(Bobby);

	uintptr_t uBobby = Serializer::serialize(&Bobby);
	Data* Bobbyptr = Serializer::deserialize(uBobby);
	std::cout << "Bobbyptr data" << std::endl;
	printData(*Bobbyptr);
}
