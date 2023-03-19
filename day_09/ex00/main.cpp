/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 19:47:57 by ntitan            #+#    #+#             */
/*   Updated: 2023/03/19 20:17:19 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Bad input. ./btc [input file]" << std::endl;
		return 0;
	}
	BitcoinExchange *lol = new BitcoinExchange();
	lol->parse_file("data.csv");
	lol->parse_file(std::string(argv[1]));
	lol->proc();
}
