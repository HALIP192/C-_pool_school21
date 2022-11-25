/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:23:10 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/25 17:35:46 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERT_HPP
# define SCALAR_CONVERT_HPP

#include <iostream>
#include <math.h>
#include <string>

enum TypeLiteral {
	CHAR_,
	INT_,
	FLOAT_,
	DOUBLE_
};

class ScalarConvert {
public:
	ScalarConvert();
	~ScalarConvert();

	void	printConvert(const std::string &liter);

	class EmptyLiteral : public std::exception {
	public:
		virtual const char	*what() const throw();
	};

	class InvalidLiteral : public std::exception {
	public:
		virtual const char	*what() const throw();
	};

	class ImposibleConvert : public std::exception {
	public:
		virtual const char	*what() const throw();
	};

	class NonDisplay : public std::exception {
	public:
		virtual const char	*what() const throw();
	};

private:
	ScalarConvert(const ScalarConvert &copy);
	ScalarConvert	&operator=(const ScalarConvert &a);

	int		convertToInt(const	std::string &liter);
	float	convertToFloat(const	std::string &liter);
	char	convertToChar(const std::string &liter);
	double	convertToDouble(const std::string &liter);
};
#endif
