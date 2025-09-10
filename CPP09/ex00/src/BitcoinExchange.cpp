/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:03:40 by ktintim           #+#    #+#             */
/*   Updated: 2025/09/10 16:20:54 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::ifstream dbFile("includes/data.csv");
	std::string line;

	while (std::getline(dbFile, line))
	{
		if (!isdigit(line[0]))
			continue ;
		int sep = line.find_first_of(',', 0);
		if (sep == (int)std::string::npos)
			continue ;
		char *tmp = new char[sep];
		double value;
		line.copy(tmp, line.size() - sep, sep + 1);
		tmp[sep] = '\0';
		value = std::atof(tmp);
		line.erase(sep, line.size() - sep + 1);
		
		_db.insert(std::make_pair(line, value));
		delete[] tmp;
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
