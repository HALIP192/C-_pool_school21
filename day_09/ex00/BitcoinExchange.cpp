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

#include <BitcoinExchange.hpp>

BitcoinExchange::BitcoinExchange(std::string filename)
{
		


}

void BitcoinExchange::parse_file(std::string filename, bool flag)
{
	if (flag == false)
	{
		this->database.open(filename);
		std::string line, word;
		if (database.is_open()) {
			while (std::getline(database, line))
			{
				std::stringstream str(line);

				bool cnt = false;
				while (std::getline(str, word, ','))
				{
					if (word == "exchange_rate" || word == "data")
						continue;
					if (cnt == false)
						this->date_database.push_back(is_valid_date(word));
					if (cnt == true)
						this->rate_database.push_back(is_valid_rate(std::stof(word));
				}
			}
		} else {
			std::cout << "Error: cann't find file data.csv" << std::endl;
		}
	} else {
		this->input.open(filename);
		std::string line, word;
		if (database.is_open()) {
			while (std::getline(database, line))
			{
				std::stringstream str(line);

				bool cnt = false;
				while (std::getline(str, word, '|'))
				{
					if (word == "exchange_rate" || word == "data")
						continue;
					if (cnt == false)
						this->date_database.push_back(word);
					if (cnt == true)
						this->rate_database.push_back(word);
				}
			}
		} else {
			std::cout << "Error: cann't find file " << filename << std::endl;
		}
	}
}
