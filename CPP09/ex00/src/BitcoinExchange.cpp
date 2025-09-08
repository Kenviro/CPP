/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:03:40 by ktintim           #+#    #+#             */
/*   Updated: 2025/09/08 14:10:05 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	
}

BitcoinExchange::BitcoinExchange(char *input) : _inputPath(input), _line(0)
{
	
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& cpy) :	_inputPath(cpy._inputPath), 
																_line(cpy._line)
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

int BitcoinExchange::testPath()
{
	std::ifstream myFile(this->_inputPath);

	return myFile.is_open();
}
