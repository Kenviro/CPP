/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:02:49 by ktintim           #+#    #+#             */
/*   Updated: 2025/09/15 14:49:34 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <string>
# include <iostream>
# include <fstream>
# include <utility>
# include <cstdlib>
# include <sstream>

class BitcoinExchange {

	private:

		std::map<std::string, float> _db;
		int checkInput(std::string line);
		
	public:
		
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& cpy);
		BitcoinExchange& operator=(const BitcoinExchange& src);
		~BitcoinExchange();
		
		void exchange(std::string input);
};

#endif