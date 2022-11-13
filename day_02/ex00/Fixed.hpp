/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:02:30 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/13 18:05:59 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# define WITH_FLOAT_PARTH 8

# include <iostream>

class Fixed
{
	private:
		int value;
		static int widthFloatPart;

	public:
		Fixed(void);
		Fixed(const Fixed &obj);
		~Fixed(void);

		Fixed &operator=(const Fixed &obj);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
