/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 10:22:38 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/09 10:55:47 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "adresse of string: " << &string << std::endl
			  << "adresse of stringPTR: " << stringPTR << std::endl
			  << "adresse of stringREF: " << &stringREF << std::endl;

	std::cout << "value of string: " << string << std::endl
			  << "value of stringPTR: " << *stringPTR << std::endl
			  << "value of stringREF: " << stringREF << std::endl;
	
	return (0);
}