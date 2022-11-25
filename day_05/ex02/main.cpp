/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:34:53 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/25 15:42:23 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

static void testForm(Bureaucrat* bur, AForm* form)
{
	std::cout << std::endl << "Sign & Execute \033[33m" << form->getName() << "\033[0m : " << std::endl;
	bur->signForm(*form);
	bur->executeForm(*form);
}

void	sectionTitle(const std::string& title) {
    std::cout	<< std::endl
                 << "*** " << title << " ***"
                 << std::endl << std::endl;
}

void	printError(std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
}

int main()
{
	ShrubberyCreationForm* shrub = new ShrubberyCreationForm("Patrick");
	RobotomyRequestForm* robot = new RobotomyRequestForm("Bob");
	PresidentialPardonForm* pardon = new PresidentialPardonForm("Pef");

	Bureaucrat* bob = new Bureaucrat("Bob", 120);
	Bureaucrat* james = new Bureaucrat("James", 45);
	Bureaucrat* meg = new Bureaucrat("Meg", 1);

	std::cout << "\033[31mNormal\033[0m tests : " << std::endl;

	testForm(bob, shrub);
	testForm(james, robot);
	testForm(meg, pardon);

	std::cout << std::endl << "\033[31mAlreadySigned & ToLow\033[0m tests : " << std::endl;

	testForm(bob, pardon);

	delete meg;
	delete james;
	delete bob;

	delete pardon;
	delete robot;
	delete shrub;

	return (0);
}
