/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:22:41 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/25 15:26:30 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"

#define MIN_GRADE   150
#define MAX_GRADE   1

class AForm;

class Bureaucrat {
private:
    const   std::string name;
    short   grade;
public:
    Bureaucrat();
    Bureaucrat(const std::string &n, short g);
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat &operator=(const Bureaucrat &a);
    ~Bureaucrat();

    std::string getName() const;
    short   getGrade()  const;

    void    incGrade(short chg = 1);
    void    decGrade(short chg = 1);

    void    signForm(AForm &form) const;
	void	executeForm(AForm const & form);

    class   GradeTooLowException : public std::exception
    {
        virtual const char* what() const throw();
    };
    class   GradeTooHighException : public std::exception
    {
        virtual const char* what() const throw();
    };
};

std::ostream    &operator<<(std::ostream &o, const Bureaucrat &b);

#endif
