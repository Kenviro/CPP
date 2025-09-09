/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:03:40 by ktintim           #+#    #+#             */
/*   Updated: 2025/09/09 14:15:13 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::ifstream dbFile;
	std::string line;

	dbFile.open("../includes/data.csv");
	while (std::getline(dbFile, line))
	{
		if (isdigit(line[0]))
			continue ;
		int sep = line.find_first_of(',', line.size());

		char *tmp;
		int value;
		line.copy(tmp, line.size() - sep, sep + 1);
		value = atoi(tmp);
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& cpy) : _db(cpy._db)
{
	
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange& src)
{
	if (this != &src)
	{
		
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{
	
}
