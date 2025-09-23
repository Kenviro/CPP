/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:02:49 by ktintim           #+#    #+#             */
/*   Updated: 2025/09/23 15:42:13 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <string>
# include <iostream>
# include <fstream>
# include <ctime>
# include <sstream>

class Date {

	private:

		std::tm *_date;
		Date();

	public:

		Date(int year, int month, int day);
		Date(const Date& cpy);
		Date& operator=(const Date& src);
		~Date();

		time_t getTime() const;
		
		bool operator<(const Date &rhs) const;
		bool operator>(const Date &rhs) const;
		bool operator<=(const Date &rhs) const;
		bool operator>=(const Date &rhs) const;
		bool operator==(const Date &rhs) const;
		bool operator!=(const Date &rhs) const;
};

std::map<Date, double> *generateData(std::ifstream& db);
void bitcoinExchange(std::map<Date, double> *db, std::ifstream& input);

#endif