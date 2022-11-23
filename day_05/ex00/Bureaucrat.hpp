#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat {

    const std::string name;
    int grade;
    public:
    Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &obj);

    class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw();
    };

    Bureaucrat(const std::string &str, int grd);
    Bureaucrat(const Bureaucrat &obj);
    ~Bureaucrat();

    const std::string &getName() const;
    int getGrade() const;

    void incGrade();
    void decGrade();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);
#endif
