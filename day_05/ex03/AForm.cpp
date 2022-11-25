#include "AForm.hpp"

static void checkGrade(short grade, int min = MIN_GRADE, int max = MAX_GRADE) {
	if (grade > min)
		throw AForm::GradeTooLowException();
	else if (grade < max)
		throw AForm::GradeTooHighException();
}

AForm::AForm(): name("pupa_form"), is_signed(false), grade_sign(0), grade_exec(0) {}

AForm::AForm(const std::string &name, short grade_s, short grade_e): name(name),
is_signed(false), grade_sign(grade_s), grade_exec(grade_e) {
	checkGrade(grade_s);
	checkGrade(grade_e);
}

AForm::AForm(const AForm &copy): name(copy.name),
is_signed(false), grade_sign(copy.grade_sign), grade_exec(copy.grade_exec){}

AForm &AForm::operator=(const AForm &a) {
	is_signed = a.is_signed;
	return *this;
}

AForm::~AForm() {}

const std::string &AForm::getName() const {return name;}

short AForm::get_grade_s() const {return grade_sign;}

short AForm::get_grade_e() const {return grade_exec;}

bool AForm::get_signed() const {return is_signed;}

void AForm::beSigned(const Bureaucrat &b) {
	if (is_signed)
		throw AlreadySignedException();
	if (grade_sign < b.getGrade())
		throw AForm::GradeTooLowException();
	is_signed = true;
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "Form grade too low!";
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "Form grade too high!";
}

const char* AForm::AlreadySignedException::what() const throw() {
	return "Form cannot sign a form twice!";
}

const char* AForm::FormNotSigned::what() const throw() {
	return "Form cannot execute while not signed!";
}

std::ostream &operator<<(std::ostream &o, const AForm& form) {
	o << "Form" << form.getName() << ", signed: " << form.get_signed() << 
		 ", grade to sign " << form.get_grade_s() << ", grade to execute " << form.get_grade_e() << std::endl;
	return o;
}
