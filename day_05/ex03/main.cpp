/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:34:53 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/25 16:44:46 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void	sectionTitle(const std::string& title) {
	std::cout	<< std::endl
				 << "*** " << title << " ***"
				 << std::endl << std::endl;
}

int main()
{
	try
	{
		sectionTitle("Intern Create Forms");

		Intern  someRandomIntern;
		AForm*   rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		AForm* president;
		president = someRandomIntern.makeForm("presidental pardon", "PR");
		AForm *shrubbery;
		shrubbery = someRandomIntern.makeForm("shrubbery creation", "SC");
		AForm* wrong_f;
		wrong_f = someRandomIntern.makeForm("fake", "home");

		sectionTitle("Bureaucrat Bob execute Forms created by Intern");

		Bureaucrat	executor("Bob", 1);

		executor.signForm(*shrubbery);
		executor.executeForm(*shrubbery);

		executor.signForm(*rrf);
		executor.executeForm(*rrf);

		executor.signForm(*president);
		executor.executeForm(*president);

		delete rrf;
		delete president;
		delete shrubbery;
		delete wrong_f;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
