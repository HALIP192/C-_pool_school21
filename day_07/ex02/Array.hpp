/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:46:55 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/26 14:51:11 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template<class T>
class Array {
	T *arr;
	unsigned int count;
	public:
	Array();
	Array(unsigned int n);
	Array(const Array<T> &obj);
	~Array();

	Array<T> &operator=(const Array<T> &obj);
	T &operator[](unsigned int idx) const;
	unsigned int size(void) const;
};

#include "Array.tpp"

#endif
