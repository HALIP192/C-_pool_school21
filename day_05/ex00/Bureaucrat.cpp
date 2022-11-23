#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat default constr called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
:name(obj.name), grade(obj.grade)
{
    std::cout << "Bureaucrat coopy constr called" << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade already is max";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade already is min";
}

Bureaucrat::Bureaucrat(const std::string &str, int grd)
: name(str), grade(grd)
{
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    std::cout << "Bureaucrat was created" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor was called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    std::cout << "Bureaucrat assign operator was called" << std::endl;
    grade = obj.grade;
    return *this;
}

const std::string &Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::incGrade()
{
    if (grade == 1)
        throw Bureaucrat::GradeTooHighException();
    else
        grade--;
}

void Bureaucrat::decGrade()
{
    if (grade == 150)
        throw Bureaucrat::GradeTooLowException();
    else
        grade++;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj)
{
    out << obj.getName() + ", Bureaucrat grade " << obj.getGrade();
    return out;
}
