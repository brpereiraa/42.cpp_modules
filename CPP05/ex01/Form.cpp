#include "Form.hpp"

Form::Form(): name("default"), signGrade(0), execGrade(0){
        this->flag = false;
}

Form::Form(std::string name, int signGrade, int execGrade): name(name), signGrade(signGrade), execGrade(execGrade) {
        this->flag = false;
}

Form::Form(const Form &form): name(form.getName()), signGrade(form.getSignGrade()), execGrade(form.getExecGrade()){
    this->flag = form.getFlag();
}

Form::~Form(){}

Form &Form::operator=(const Form &form){
    if (this != &form)
        this->flag = form.flag;
    return *this;
}

const std::string Form::getName() const { return this->name; }
bool Form::getFlag() const { return this->flag; }
int Form::getExecGrade() const { return this->execGrade; }
int Form::getSignGrade() const { return this->signGrade; }

void Form::beSigned(Bureaucrat &bureau){
    if (bureau.getGrade() > this->signGrade) {
        throw GradeTooLowException();
    }
    this->flag = true;
}

const char *Form::GradeTooHighException::what() const throw() {
    return ("Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("Grade is too low");
}

std::ostream &operator<<(std::ostream &out, const Form &obj){
    out << "Form: " << obj.getName() << ", Sign Grade: " << obj.getSignGrade() 
        << ", Exec Grade: " << obj.getExecGrade() << ", Signed: " << (obj.getFlag() ? "Yes" : "No");
    return out;
}