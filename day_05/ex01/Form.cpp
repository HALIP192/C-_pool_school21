#include "Form.hpp"

static void checkGrade(short grade, int min = MIN_GRADE, int max = MAX_GRADE){
    if (grade > min)
        throw Form::GradeTooLowException();
    else if (grade < max)
        throw Form::GradeTooHighException();
}

Form::Form() : name("pupa_form"), grade_sign(0), grade_exec(0) {}

Form::Form(const std::string &name, short grade_s, short grade_e) : name(name),
is_signed(false),
grade_sign(grade_s),
grade_exec(grade_e){
    checkGrade(grade_s);
    checkGrade(grade_e);
}

Form::Form(const Form &copy) : name(copy.name),
is_signed(false),
grade_sign(copy.grade_sign),
grade_exec(copy.grade_exec){}

Form &Form::operator=(const Form &a) {
    is_signed = a.is_signed;
    return *this;
}

Form::~Form() {}

const std::string &Form::getName() const {return name;}

short Form::get_grade_s() const {return grade_sign;}

short Form::get_grade_e() const {return grade_exec;}

bool Form::get_signed() const {return is_signed;}

void Form::beSigned(const Bureaucrat &b) {
    if (is_signed)
        throw AlreadySignedException();
    if (grade_sign < b.getGrade())
        throw Form::GradeTooLowException();
    is_signed = true;
}

const char*	Form::GradeTooLowException::what() const throw() {
    return "Form grade too low!";
}

const char*	Form::GradeTooHighException::what() const throw() {
    return "Form grade too high!";
}

const char*	Form::AlreadySignedException::what() const throw() {
    return "Form cannot sign a form twice!";
}

std::ostream&	operator<<(std::ostream &o, const Form& form){
    o << "Form " << form.getName() << ", signed: " << form.get_signed() <<
    ", grade to sign " << form.get_grade_s() << ", grade to execute " <<  form.get_grade_e() << std::endl;
    return o;
}
