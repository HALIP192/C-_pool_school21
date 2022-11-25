/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatevet.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:57:55 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/25 20:00:54 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<class T>
void swap(T &a, T &b)
{
	T	c = a;

	a = b;
	b = c;
}

template<class T>
T	&min(T &a, T&b)
{
	return a < b ? a : b;
}

template<class T>
T	&max(T &a, T &b)
{
	return a > b ? a : b;
}

#endif
