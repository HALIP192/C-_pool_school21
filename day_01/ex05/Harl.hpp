/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:01:21 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/13 17:10:59 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# define BUF_SIZE 256

#include <string>
#include <iostream>

class Harl
{
	private:
		void (Harl::*func[BUF_SIZE])();
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		unsigned char hash(const std::string &str);
		void something(void);

		Harl(const Harl &obj);
		Harl &operator=(const Harl &obj);
	public:

		Harl(void);
		~Harl(void);

		void complain(std::string level);
};

#endif
