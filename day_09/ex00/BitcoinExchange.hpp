/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:29:12 by ntitan            #+#    #+#             */
/*   Updated: 2023/03/19 15:32:41 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

class BitcoinExchange
{
	private:
		std::fstream database;
		std::fstream input;
		std::vector<std::string> date_database;
		std::vector<float> rate_database;
		std::vector<std::string> date_input;
		std::vector<float> rate_input;

		void parse_file(std::string filename, bool flag);
	private:
		BitcoinExchange(std::string database_name);
		~BitcoinExchange();

		void print_rate();
};


