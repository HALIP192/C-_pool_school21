
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

std::string BitcoinExchange::separete(std::string &str, std::string const &dem)
{
    const size_t it = str.find(dem, 0);
    if (it != std::string::npos)
    {
        std::string ret = str.substr(0, it);
        str = str.substr(it + dem.size(), str.size() - it - 1);
        /* std::cout << ret << std::endl; */
        return ret;
    }
    std::string ret = str;
    str = "";
    /* std::cout << ret << std::endl; */
    return ret;
}

void BitcoinExchange::parse_file(std::string const &filename)
{
	database.open(filename.c_str());
    std::string separator;
	std::vector<std::string> *date;
	std::vector<float> *rate;
	if (filename == "data.csv")
	{
		separator = ",";
		date = &date_database;
		rate = &rate_database;
	} else {
		separator = " | ";
		date = &date_input;
		rate = &rate_input;
	}
	std::string line, word;
	if (database.is_open()) {
		while (std::getline(database, line))
		{
			bool cnt = false;
			while ((word = separete(line, separator)) != "")
			{
                if (word == "exchange_rate" || word == "date"
                    || word == "value")
                    continue;
				if (cnt == false) {
					date->push_back(word);
					cnt = true;
				} else {
					rate->push_back(atof(word.c_str()));
					cnt = false;
				}
			}
            if (cnt == true && word == "") {
                rate->push_back(atof(word.c_str()));
            }
		}
	} else {
		std::cout << "Error: cann't find file " << filename << std::endl;
	}
	database.close();
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
	std::string month;
	std::getline(str, month, '-');
	std::getline(str, month, '-');
	return atoi(month.c_str());

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
	if (date == " " || date == "")
		return false;
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
    std::vector<std::string>::iterator it = std::lower_bound(date_database.begin(), date_database.end(), date);
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
        /* std::cout << "inp: " << *it_date_input << " " << *it_rate_input << std::endl; */
		if (is_valid_date(*it_date_input))
		{
			if (is_valid_rate(*it_rate_input) > 0)
			{
				int fnd = findByDate(*it_date_input);
                /* std::cout << "fnd : " << fnd << std::endl; */
                /* std::cout << "date_database : " << date_database[fnd]  << "\t rate_database: " << rate_database[fnd] */
                          /* << "\t date_input : " << *it_date_input << "\t rate_input: " << *it_rate_input << std::endl; */
				std::cout << *it_date_input << " => " << *it_rate_input << " = " << rate_database[fnd] * *it_rate_input << std::endl;
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



