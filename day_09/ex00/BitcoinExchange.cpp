
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:53:38 by ntitan            #+#    #+#             */
/*   Updated: 2023/03/19 15:33:37 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange() { }

void BitcoinExchange::parse_file(std::string const &filename)
{
		database.open(filename.c_str());
		char separator;
		std::vector<std::string> *date;
		std::vector<float> *rate;
		if (filename == "data.csv")
		{
			separator = ',';
			date = &date_database;
			rate = &rate_database;
		} else {
			separator = '|';
			date = &date_input;
			rate = &rate_input;
		}
		std::string line, word;
		if (database.is_open()) {
			while (std::getline(database, line))
			{
				std::stringstream str(line);

				bool cnt = false;
				while (std::getline(str, word, separator))
				{
					if (word == "exchange_rate" || word == "data")
						continue;
					if (cnt == false) {
						date->push_back(word);
						cnt = true;
					}
					if (cnt == true) {
						rate->push_back(atof(word.c_str()));
						cnt = false;
					}
				}
			}
		} else {
			std::cout << "Error: cann't find file " << filename << std::endl;
		}
		database.close();
		std::cout << date_database.size() << std::endl;
		std::cout << rate_database.size() << std::endl;
}

int BitcoinExchange::getDay(std::string const &date)
{
	std::stringstream str(date);
	std::string day;
	std::getline(str, day, '-');
	std::getline(str, day, '-');
	std::getline(str, day, '-');
	return atoi(day.c_str());

}

int BitcoinExchange::getMonth(std::string const &date)
{
	std::stringstream str(date);
	std::string moth;
	std::getline(str, moth, '-');
	std::getline(str, moth, '-');
	return atoi(moth.c_str());

}

int BitcoinExchange::getYear(std::string const &date)
{
	std::stringstream str(date);
	std::string year;
	std::getline(str, year, '-');
	return atoi(year.c_str());
}

int BitcoinExchange::is_valid_rate(float rate)
{
	if (rate < 0)
		return -1;
	if (rate > 1000)
		return -2;
	return 1;
}

bool BitcoinExchange::is_valid_date(std::string const &date)
{
	int month = getMonth(date);
	int day = getDay(date);
	if (month > 0 && month < 13)
		if (day > 0 && day < 31)
		return true;
	return false;
}

int BitcoinExchange::findByDate(std::string const &date)
{
	std::vector<std::string>::iterator it = std::find(date_database.begin(), date_database.end(), date);
	if (it != date_database.end())
		return std::distance(date_database.begin(), it);
	return findClosestByDate(date);
}

int BitcoinExchange::findClosestByDate(std::string const &date)
{
	std::vector<std::string>::iterator it = date_database.begin();
	std::vector<std::string>::iterator end = date_database.end();
	std::vector<std::string>::iterator fnd = std::find(date_database.begin(), date_database.end(), date);

	if (fnd != date_database.end())
		return std::distance(date_database.begin(), fnd);
	while(it != date_database.end() && getYear(*it) <= getYear(date))
		it++;
	while(it != date_database.end() && getYear(*it) > getYear(date))
		it--;
	while(it != date_database.end() && getYear(*it) == getYear(date) && getMonth(*it) >= getMonth(date))
		it--;
	while(it != date_database.end() && getYear(*it) == getYear(date) && getMonth(*it) == getMonth(date) && getDay(*it) <= getDay(date))
		it--;
	return std::distance(date_database.begin(), it);

}

void BitcoinExchange::proc()
{
	std::vector<std::string>::iterator it_date_input = date_input.begin();
	std::vector<std::string>::iterator end_date_input = date_input.end();
	std::vector<float>::iterator it_rate_input = rate_input.begin();
	std::vector<float>::iterator end_rate_input = rate_input.end();

	while (it_date_input != end_date_input && it_rate_input != end_rate_input)
	{
		if (is_valid_date(*it_date_input))
		{
			if (is_valid_rate(*it_rate_input))
			{
				int fnd = findByDate(*it_date_input);
				std::cout << date_database[fnd] << " => " << *it_rate_input << " = " << rate_input[fnd] * *it_rate_input << std::endl;
			} else {
				if (is_valid_rate(*it_rate_input) == -1)
					std::cout << "Error: not a positive number.\n";
				else
					std::cout << "Error: too large number.\n";
			}
		} else {
			std::cout << "Error bad input => " << *it_date_input << std::endl;
		}
		it_date_input++;
		it_rate_input++;
	}

}



