/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:29:33 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/25 17:36:01 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

ScalarConvert::~ScalarConvert() {}

ScalarConvert::ScalarConvert() {}

ScalarConvert::ScalarConvert(const ScalarConvert &copy) {
	*this = copy;
}

ScalarConvert &ScalarConvert::operator=(const ScalarConvert &a) {
	(void) a;
	return *this;
}

bool	Is_Inf_Nan(const std::string &str) {
	return str == "nan" || str == "nanf" || str == "inf" || str == "inff" || \
			str == "-inf" || str == "-inff" || str == "+inf" || str == "+inff";
}

char ScalarConvert::convertToChar(const std::string &liter) {
	if (liter.length() == 1 && !std::isdigit(liter[0]))
		return liter[0];
	else if (Is_Inf_Nan(liter))
		throw ScalarConvert::ImposibleConvert();

	if (liter.find('.') == std::string::npos)
	{
		int tmp;
		try {
			tmp = atoi(liter.c_str());
		} catch (const std::exception &e) {
			throw ScalarConvert::ImposibleConvert();
		}
		if (tmp < -128 || tmp > 127)
			throw ScalarConvert::ImposibleConvert();
		else if (!std::isprint(tmp))
			throw ScalarConvert::NonDisplay();
		else
			return static_cast<char>(tmp);
	}
	else {
		double	tmp;
		try {
			tmp = atof(liter.c_str());
		} catch (const std::exception &e) {
			throw ScalarConvert::ImposibleConvert();
		}

		if (tmp - floor(tmp) != 0.0)
			throw ScalarConvert::ImposibleConvert();
		int tmp_i = atoi(liter.c_str());
		if (tmp_i < -128 || tmp_i > 127)
			throw ScalarConvert::ImposibleConvert();
		else if (!std::isprint(tmp_i))
			throw ScalarConvert::NonDisplay();
		else
			return static_cast<char>(tmp);
	}
}

int ScalarConvert::convertToInt(const std::string &liter) {
	if (Is_Inf_Nan(liter))
		throw ScalarConvert::ImposibleConvert();

	int ret;
	if (liter.length() == 1 && !std::isdigit(liter[0]))
	{
		char	c = liter[0];
		unsigned char	uc = static_cast<unsigned char>(c);
		ret = static_cast<int>(uc);
	} else
		ret = atoi(liter.c_str());
	return ret;
}

double	ScalarConvert::convertToDouble(const std::string &liter) {
	double	ret;

	if (liter.length() == 1 && !std::isdigit(liter[0]))
	{
		char	c = liter[0];
		unsigned char	uc = static_cast<unsigned char>(c);
		ret = static_cast<double>(uc);
	}
	else
		ret = atof(liter.c_str());
	return ret;
}

float ScalarConvert::convertToFloat(const std::string &liter) {
	float	ret;

	if (liter.length() == 1 && !std::isdigit(liter[0]))
	{
		char	c = liter[0];
		unsigned char	uc = static_cast<unsigned char>(c);
		ret = static_cast<float>(uc);
	}
	else
		ret = atof(liter.c_str());
	return ret;
}

bool	checkLiter(const std::string &str)
{
	if (Is_Inf_Nan(str))
		return false;
	if (str.length() == 1)
		return false;
	int	check_f = 0;
	int	check_dot = 0;
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (i == 0 && (str[i] == '-' || str[i] == '+'))
			continue;
		if (str[i] == '.')
		{
			++check_dot;
			if (check_dot > 1)
				return true;
		}
		if (str[i] == 'f') {
			++check_f;
			if (check_f > 1)
				return true;
		}
		if (!std::isdigit(str[i]) && str[i] != 'f' && str[i] != '.') {
			return true;
		}
	}
	return false;
}

void	ScalarConvert::printConvert(const std::string &liter) {
	if (liter.empty())
		throw ScalarConvert::EmptyLiteral();
	else if (checkLiter(liter))
		throw ScalarConvert::InvalidLiteral();

	try {
		char c = convertToChar(liter);
		std::cout << "char: '" << c << "'" << std::endl;
	} catch (const std::exception &e) {
		std::cout << "char: " << e.what() << std::endl;
	}

	try {
		int	i = convertToInt(liter);
		std::cout << "int: " << i << std::endl;
	} catch (const std::exception &e){
		std::cout << "int: " << e.what() << std::endl;
	}

	try {
		float	f = convertToFloat(liter);
		if (f - floor(f) == 0.0)
			std::cout << "float: " << f << ".0f" << std::endl;
		else
			std::cout << "float: " << f << "f" << std::endl;
	} catch (const std::exception &e) {
		std::cout << "float: " << e.what() << std::endl;
	}

	try {
		double d = convertToDouble(liter);
		if (d - floor(d) == 0.0)
			std::cout << "double: " << d << ".0" << std::endl;
		else
			std::cout << "double: " << d << std::endl;
	} catch (const std::exception &e) {
		std::cout << "double: " << e.what() << std::endl;
	}
}

const char *ScalarConvert::EmptyLiteral::what() const throw() {
	return "literal is empty!";
}

const char *ScalarConvert::InvalidLiteral::what() const throw() {
	return "literal is invalid!";
}

const char *ScalarConvert::ImposibleConvert::what() const throw() {
	return "impossible";
}

const char *ScalarConvert::NonDisplay::what() const throw() {
	return "Non displayable";
}
