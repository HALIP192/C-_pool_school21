/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:43:50 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/25 15:50:43 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

enum FormType {
	SHRUBBERY,
	ROBOTOMY,
	PRESIDENTAL,
	OTHER
};

class Intern {
	public:
		Intern();
		Intern(const Intern &copy);
		Intern &operator=(const Intern &a);
		~Intern();

		AForm *makeForm(std::string form_type, std::string form_target);
	private:
		FormType	FindIdxFormType(std::string type);
};

#endif
