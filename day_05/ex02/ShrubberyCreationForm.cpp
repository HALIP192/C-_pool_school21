/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:24:48 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/25 15:30:26 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyForm", 145, 137), target("DefaultTarger") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm("ShrubberyForm", 145, 137), target(copy.target) {
	*this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &a) {
	AForm::operator=(a);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (!AForm::get_signed())
		throw AForm::FormNotSigned();
	else if (AForm::get_grade_e() < executor.getGrade())
		throw  AForm::GradeTooLowException();

	std::fstream strm;
	strm.open(("./" + target + "_shrubbery").c_str(), std::ios::out);
	strm << "          .     .  .      +     .      .          ." << std::endl;
	strm << "     .       .      .     #       .           ." << std::endl;
	strm << "        .      .         ###            .      .      ." << std::endl;
	strm << "      .      .   *#:. .:##*##:. .:#*  .      ." << std::endl;
	strm << "          .      . *####*###*####*  ." << std::endl;
	strm << "       .     *#:.    .:#*###*#:.    .:#*  .        .       ." << std::endl;
	strm << "  .             *#########*#########*        .        ." << std::endl;
	strm << "        .    *#:.  *####*###*####*  .:#*   .       ." << std::endl;
	strm << "     .     .  *#######**##*##**#######*                  ." << std::endl;
	strm << "                .*##*#####*#####*##*           .      ." << std::endl;
	strm << "    .   *#:. ...  .:##*###*###*##:.  ... .:#*     ." << std::endl;
	strm << "      .     *#######*##*#####*##*#######*      .     ." << std::endl;
	strm << "    .    .     *#####**#######**#####*    .      ." << std::endl;
	strm << "            .     *      000      *    .     ." << std::endl;
	strm << "       .         .   .   000     .        .       ." << std::endl;
	strm << ".. .. ..................O000O........................ ...... ..." << std::endl;

}
