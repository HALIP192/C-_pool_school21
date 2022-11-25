/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:31:51 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/25 15:33:00 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", 72, 45), target("DefaultRob") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm("Robotomy", 72, 45), target(copy.target) {
	*this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &a) {
	AForm::operator=(a);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (!AForm::get_signed())
		throw AForm::FormNotSigned();
	else if (AForm::get_grade_e() < executor.getGrade())
		throw  AForm::GradeTooLowException();

	srand(time(NULL));
	if (std::rand() % 2)
		std::cout << target << " has been successfully robotomy!" << std::endl;
	else
		std::cout << target << " hasn\'t been successfully robotomy(((" << std:: endl;
}
