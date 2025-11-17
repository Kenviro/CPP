/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:52:15 by ktintim           #+#    #+#             */
/*   Updated: 2025/11/17 10:14:35 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

int main(int ac, char** av)
{
	(void)ac;
	std::ifstream input(av[1]);
	if (!input.is_open())
	{
		std::cerr << "Error: could not open file" << std::endl;
		return 1;
	}
	std::ifstream db("includes/data.csv");
	if (!db)
	{
		std::cerr << "Error: couldnt open data.csv" << std::endl;
		return 1;
	}
	
	std::map<Date, double> *dbMap = generateData(db);
	bitcoinExchange(dbMap, input);
	delete dbMap;

	return 0;
}
