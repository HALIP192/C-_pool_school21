/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:29:12 by ntitan            #+#    #+#             */
/*   Updated: 2023/03/19 20:19:05 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <utility>
#include <stdlib.h>

class BitcoinExchange
{
	private:
		std::fstream database;
		std::fstream input;
		std::vector<std::string> date_database;
		std::vector<float> rate_database;
		std::vector<std::string> date_input;
		std::vector<float> rate_input;

	public:
		void parse_file(std::string const &filename);
        std::string separete(std::string &str, std::string const &dem);
		bool is_valid_date(std::string const &date);
		int is_valid_rate(float rate);
		int getYear(std::string const &date);
		int getMonth(std::string const &date);
		int getDay(std::string const &date);
		int findByDate(std::string const &date);
		int findClosestByDate(std::string const &date);
		void proc();
		BitcoinExchange();
		~BitcoinExchange();

		void print_rate();
};


