/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:52:15 by ktintim           #+#    #+#             */
/*   Updated: 2025/09/23 15:32:15 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

int main(int ac, char** av)
{
	(void)ac;
	std::ifstream input(av[1]);
	if (!input)
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

	return 0;
}
