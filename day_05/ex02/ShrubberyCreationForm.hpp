/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:23:53 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/25 15:30:07 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHROB_FORM_HPP
# define SHROB_FORM_HPP

#include "AForm.hpp"
#include "fstream"

class ShrubberyCreationForm : public AForm {
private:
	const std::string	target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &a);
	virtual ~ShrubberyCreationForm();

	virtual void	execute(const Bureaucrat &executor) const;
};

#endif
