/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:03:40 by ktintim           #+#    #+#             */
/*   Updated: 2025/09/15 11:04:11 by ktintim          ###   ########.fr       */
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
		float value;
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
		_db = src._db;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{
	
}

void BitcoinExchange::exchange(std::string line)
{
	
}
