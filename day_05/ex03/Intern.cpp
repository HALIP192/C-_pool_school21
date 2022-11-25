/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:50:48 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/25 16:44:34 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &copy) {
	*this = copy;
}

Intern &Intern::operator=(const Intern &a) {
	(void) a;
	return (*this);
}

FormType Intern::FindIdxFormType(std::string type) {
	const std::string types[3] =
	{"shrubbery creation", "robotomy request", "presidental pardon"};
	int i;
	for (i = 0; i < 3; i++)
	{
		if (type == types[i])
			break;
	}
	return static_cast<FormType>(i);
}

AForm *Intern::makeForm(std::string form_type, std::string form_target) {
	switch (FindIdxFormType(form_type)) {
		case SHRUBBERY:
			std::cout << "Intern creates form \"" << form_target << "\"\n";
			return new ShrubberyCreationForm(form_target);
		case ROBOTOMY:
			std::cout << "Intern creates form \"" << form_target << "\"\n";
			return new RobotomyRequestForm(form_target);
		case PRESIDENTAL:
			std::cout << "Intern creates form \"" << form_target << "\"\n";
			return new PresidentialPardonForm(form_target);
		default:
			std::cerr << "Type of form " << "\"" << form_type
					  << "\"" << " den\'t exists!\n";
			return NULL;
	}
}
