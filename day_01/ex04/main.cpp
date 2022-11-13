/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:25:05 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/13 16:56:49 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void copy(std::ifstream &in, std::ofstream &out, std::string &s1, std::string &s2)
{
	size_t pos;
	size_t left;
	std::string value;

	while (!in.eof())
	{
		left = 0;
		pos = std::string::npos;
		std::getline(in, value);
		pos = value.find(s1, left);
		while (pos != std::string::npos)
		{
			out << value.substr(left, pos - left);
			out << s2;
			left += pos + s1.size();
			pos = value.find(s1, left);
		}
		out << value.substr(left, value.size());
		if (!in.eof())
			out << std::endl;
	}
}

int error(const std::string &str, int ret_code)
{
	std::cerr << str << std::endl;
	return ret_code;
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return error("Error: your input haven't 3 arguments", 1);
	std::string fileName(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	if (fileName.size() == 0)
		return error("Error: your name file is empty", 2);
	if (s1 == "")
		return error("Error: string s1 is empty", 3);
	else
	{
		std::ifstream input(fileName.c_str());
		std::ofstream output((fileName + ".replace").c_str());
		int flag = (input.is_open() << 1) + (output.is_open());
		if (flag == 3)
			copy(input, output, s1, s2);
		if (flag & 2)
			input.close();
		if (flag & 1)
			output.close();
		if (flag != 3)
			return error("Error: file not open",4);
	}
	return 0;
}
