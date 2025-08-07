/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvertor.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 22:57:16 by kilian            #+#    #+#             */
/*   Updated: 2025/08/03 13:55:03 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConvertor.hpp"

/***************************Constructor & Destructor****************************/

ScalarConvertor::ScalarConvertor()
{
	std::cout << "you are NOT supposed to be here" << std::endl;
}

ScalarConvertor::ScalarConvertor(const ScalarConvertor& cpy)
{
	(void)cpy;
}

ScalarConvertor &ScalarConvertor::operator=(const ScalarConvertor& src)
{
	if (this != &src)
	{
		(void)src;
	}
	return *this;
}

ScalarConvertor::~ScalarConvertor()
{
	std::cout << "Bye bye even if your not supposed to see that right ?" << std::endl;
}

/********************************Getter & Setter********************************/

/*********************************Member function*******************************/

void ScalarConvertor::convert(const std::string &s)
{
	double	nbr;
	char	*ptr = NULL;

	if (s.length() == 1 && !isdigit(s[0]) && isprint(s[0]))
		nbr = static_cast<double>(s[0]);
	else
		nbr = strtod(s.c_str(), &ptr);
	if (ptr != NULL && !(ptr[0] == 0 || ptr[0] == 'f'))
	{
		std::cerr << "Invalid input.\n";
		return;
	}

	std::cout << "nbr = " << nbr << std::endl;
	if (s.length() > 6)
		std::cout << std::setprecision(s.length());
	std::cout << "Character : ";
	if ((nbr < 128 && nbr > 0) && isprint(nbr))
		std::cout << "'" << static_cast<char>(nbr) << "'" << std::endl;
	else
		std::cout << "Impossible" << std::endl;
	std::cout << "Integer : ";
	if (nbr < INT_MAX && nbr > INT_MIN)
		std::cout << trunc(nbr) << std::endl;
	else
		std::cout << "Impossible" << std::endl;
	std::cout << "float : ";
	std::cout << static_cast<float>(nbr);
	if (trunc(nbr) == nbr)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	std::cout << "double : " << nbr;
	if (trunc(nbr) == nbr)
		std::cout << ".0";
	std::cout << std::endl;
}
