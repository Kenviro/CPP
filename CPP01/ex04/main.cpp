/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 23:15:58 by kilian            #+#    #+#             */
/*   Updated: 2025/04/08 23:49:51 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int	main (int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong number of argument D:<" << std::endl;
		return (1);
	}
	
	std::string file_name = av[1];
	std::ifstream fichierIn(file_name.c_str());
	if (!fichierIn.is_open()) 
	{
		std::cerr << "Errorr : cannot open file" << std::endl;
		return (1);
    }

    std::stringstream buffer;
    buffer << fichierIn.rdbuf();
    std::string contenu = buffer.str();
    fichierIn.close();

	std::string S1 = av[2];
	std::string S2 = av[3];
	std::string resultat;
	size_t	i = 0;
	while (i < contenu.length())
	{
		if (contenu.substr(i, S1.length()) == S1)
		{
			resultat += S2;
			i += S1.length();
		}
		else
		{
			resultat += contenu[i];
			i++;
		}
	}

	std::ofstream fichierOut((file_name + ".replace").c_str());
	fichierOut << resultat;
	return (0);
}
