/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:23:14 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/25 15:28:58 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Pupa"), grade(150) {}

Bureaucrat::Bureaucrat(const std::string &n, short g) : name(n) {
    if (g < MAX_GRADE)
        throw GradeTooHighException();
    else if (g > MIN_GRADE)
        throw GradeTooLowException();
    else
        grade = g;
}

short Bureaucrat::getGrade() const { return grade;}

std::string Bureaucrat::getName() const { return name;}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name), grade(copy.grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &a) {
    grade = a.grade;
    return *this;
}

Bureaucrat::~Bureaucrat() {}

void Bureaucrat::incGrade(short chg) {
    if (grade - chg < MAX_GRADE)
        throw GradeTooHighException();
    else
        grade -= chg;
}

void Bureaucrat::decGrade(short chg) {
    if (grade + chg > MIN_GRADE)
        throw GradeTooLowException();
    else
        grade += chg;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Bureaucrat grade too low!";
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Bureaucrat grade too high!";
}

std::ostream    &operator<<(std::ostream &o, const Bureaucrat &b)
{
    o << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return o;
}

void Bureaucrat::signForm(AForm &form) const {
    try{
        form.beSigned(*this);
        std::cout << name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception &e){
        std::cout << name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(const AForm &form) {
	try {
		form.execute(*this);
		std::cout << name << " execute " << form.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << name << " cant\'s execute " << form.getName();
		std::cout << " because " << e.what() << std::endl;
	}
}
