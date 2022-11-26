/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:38:17 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/26 15:50:05 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <exception>
# include <algorithm>

class exceptNotFound: public std::exception {
	public:
		virtual const char *what() const throw() {
			return "Element not found at container";
		}
};

template<typename T>
typename T::iterator easyfind(T &container, int val)
{
	typename T::iterator f = std::find(container.begin(), container.end(), val);
	if (f != container.end())
		return f;
	else
		throw exceptNotFound();
}

#endif
