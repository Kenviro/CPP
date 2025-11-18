/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:03:40 by ktintim           #+#    #+#             */
/*   Updated: 2025/11/18 10:54:56 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

Date::Date()
{
	
}

Date::Date(int year, int month, int day)
{
	if (year < 1900 || month < 0 || month > 12 || day < 0 || day > 31)
		throw std::out_of_range("Error: invalid date");
	_date = new std::tm;
	_date->tm_year = year - 1900;
	_date->tm_mon = month - 1;
	_date->tm_mday = day;
	_date->tm_hour = 0;
	_date->tm_min = 0;
	_date->tm_sec = 0;
	_date->tm_isdst = -1;
}

Date::Date(const Date& cpy) : _date(new std::tm)
{
	*_date = *cpy._date;
}

Date &Date::operator=(const Date& src)
{
	if (this != &src)
	{
		*_date = *src._date;
	}
	return *this;
}

Date::~Date()
{
	delete _date;
}

time_t Date::getTime() const
{
	return std::mktime(_date);
}

bool Date::operator<(const Date &rhs) const
{
	return getTime() < rhs.getTime();
}

bool Date::operator>(const Date &rhs) const
{
	return getTime() > rhs.getTime();
}

bool Date::operator<=(const Date &rhs) const
{
	return getTime() <= rhs.getTime();
}

bool Date::operator>=(const Date &rhs) const
{
	return getTime() >= rhs.getTime();
}

bool Date::operator==(const Date &rhs) const
{
	return getTime() == rhs.getTime();
}

bool Date::operator!=(const Date &rhs) const
{
	return getTime() != rhs.getTime();
}


static Date makeDate(const char* s)
{
	int year;
	int month;
	int day;
	if (sscanf(s, "%d-%d-%d", &year, &month, &day) != 3)
	{
		std::string error("Error: bad input => ");
		error += s;
		throw std::invalid_argument(error);
	}
	
	return Date(year, month, day);
}

static std::pair<Date, double> makeMap(std::string line, std::string sep)
{
	std::stringstream ss(line);
	std::string date;
	
	ss >> date;
	Date d = makeDate(date.c_str());
	
	(void)sep;
	// std::string separ;
	// ss >> separ;
	// if (separ != sep)
	// {
	// 	std::string error("Error: invalid line format => ");
	// 	error += line;
	// 	throw std::invalid_argument(error.c_str());
	// }
	
	double value;
	ss >> value;
	if (value < 0)
		throw std::out_of_range("Error: not a positive number.");
	if (value > 1000)
		throw std::out_of_range("Error: too large number.");

	return (std::make_pair(d, value));
}

std::map<Date, double> *generateData(std::ifstream& db)
{
	std::map<Date, double> *data = new std::map<Date, double>;
	std::string line;
	std::getline(db, line);
	std::stringstream ss(line);
	std::string sep;
	
	ss >> line;
	ss >> sep;
	
	while (std::getline(db, line))
	{
		try
		{
			data->insert(makeMap(line, sep));
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			continue ;
		}
	}
	return data;
}

static double foundValue(const char* date, std::map<Date, double> *db)
{
	if (!date)
		throw std::invalid_argument("Error: bad date");
		
	Date d = makeDate(date);
	try
	{
		return db->at(d);
	}
	catch(const std::exception& e)
	{
		std::map<Date, double>::iterator it = db->lower_bound(d);
		it--;
		return it->second;
	}
}

void bitcoinExchange(std::map<Date, double> *db, std::ifstream& input)
{
	std::string line;
	std::string date;
	double value;
	double mapValue;
	
	while (std::getline(input, line))
	{
		try
		{
			if (line[11] == '|')
				line[11] = ' ';
			else
			{
				std::string error("Error: no separator => ");
				error += line;
				throw std::invalid_argument(error.c_str());
			}

			std::stringstream ss(line);
			ss >> date;
			mapValue = foundValue(date.c_str(), db);
			std::cout << "mapValue = " << mapValue << std::endl;
			ss >> value;
			if (value < 0)
				throw std::out_of_range("Error: not a positive number.");
			if (value > 1000)
				throw std::out_of_range("Error: too large number.");

			double scaledValue = (value * mapValue);
			std::cout << date << 
			" => " << value << 
			" = " << scaledValue << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
