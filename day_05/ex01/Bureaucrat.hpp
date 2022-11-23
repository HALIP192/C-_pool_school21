#ifndef BUREAUCRAT_CPP
# define BUREAUCRAT_CPP

# include <string>
# include <iostream>
# include <exception>
# include "Form.hpp"

# define MIN_GRADE   150
# define MAX_GRADE   1

class Form;

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

    void    signForm(Form &form) const;

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

#endif //CPP05_BUREAUCRAT_H
