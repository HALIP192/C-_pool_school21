/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:33:20 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/25 15:33:55 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENT_FORM_HPP
# define PRESIDENT_FORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
private:
	const std::string	target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &a);
	virtual ~PresidentialPardonForm();

	virtual	void	execute(const Bureaucrat &executor) const;
};

#endif
