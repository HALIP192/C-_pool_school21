/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Spa.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:53:04 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/26 16:16:53 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <exception>
# include <string>
# include <algorithm>
# include <iostream>

typedef unsigned int uint;

class Span 
{
	std::vector<uint> arr;
	uint end;
	Span (void);
public:

	class SpanException: public std::exception
	{
		const std::string str;
		public:
		SpanException(const std::string &s);
		virtual const char *what() const throw();
		virtual ~SpanException() throw();
	};

	Span(uint n);
	Span(const Span &obj);
	~Span();
	Span &operator=(const Span &obj);
	void addNumber(std::vector<uint>::iterator begin, std::vector<uint>::iterator end);
	void addNumber(uint newVal);
	void addArrayNumbers(const uint *arr, uint size);
	uint shortestSpan(void);
	uint longestSpan();
	void printArray();
};

#endif
