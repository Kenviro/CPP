/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:02:49 by ktintim           #+#    #+#             */
/*   Updated: 2025/09/08 13:59:17 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <string>
# include <iostream>
# include <fstream>

class BitcoinExchange {

	private:

		const std::string _inputPath;
		int	_line;
		
		BitcoinExchange();
		BitcoinExchange& operator=(const BitcoinExchange& src);

	public:

		BitcoinExchange(char *input);
		BitcoinExchange(const BitcoinExchange& cpy);
		~BitcoinExchange();

		int testPath();
		
};

#endif