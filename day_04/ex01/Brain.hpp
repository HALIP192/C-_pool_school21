/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:51:47 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/19 19:00:38 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRANIN_HPP

# include <iostream>
# include <string>

# define BRAIN_SIZE

class Brain
{
	public:
		std::string ideas[BRAIN_SIZE];
		Brain(void);
		Brain(const Brain &obj);
		~Brain(void);

		Brain &operator=(const Brain &obj);
}
#endif
