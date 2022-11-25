/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:54:26 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/25 15:28:20 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
	private:
		const std::string name;
		bool is_signed;
		const short grade_sign;
		const short grade_exec;
	public:
		AForm();
		AForm(const std::string &name, short grade_s, short grade_e);
		AForm(const AForm &copy);
		AForm &operator=(const AForm &a);
		virtual ~AForm();

		const std::string &getName() const;
		bool get_signed() const;
		short get_grade_s() const;
		short get_grade_e() const;

		void beSigned(const Bureaucrat &obj);
		virtual void execute(Bureaucrat const &execute) const = 0;

		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};

		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};

		class AlreadySignedException: public std::exception {
			virtual const char* what() const throw();
		};

		class FormNotSigned: public std::exception {
			virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, const AForm &form);

#endif
