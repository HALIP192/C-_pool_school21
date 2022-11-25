/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:34:00 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/25 15:34:36 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentForm", 25, 5), target("PresTarget") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentForm", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm("PresidentForm", 25, 5), target(copy.target) {
	*this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &a) {
	AForm::operator=(a);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (!AForm::get_signed())
		throw AForm::FormNotSigned();
	else if (AForm::get_grade_e() < executor.getGrade())
		throw  AForm::GradeTooLowException();

	std::cout << target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
