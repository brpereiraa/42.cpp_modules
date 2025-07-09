#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Default") {
        this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj): name(obj.getName()), grade(obj.getGrade()) {
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureau) {
	if (this != &bureau) {
		this->grade = bureau.getGrade();
	}
	return (*this);
}

const std::string Bureaucrat::getName() const { return this->name; }
int Bureaucrat::getGrade() const { return this->grade; }

void Bureaucrat::incrementGrade() {
	if (this->grade <= 1)
		throw(GradeTooHighException());
	this->grade--;
}

void Bureaucrat::decrementGrade() {
	if (this->grade >= 150)
		throw(GradeTooLowException());
	this->grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj){
        out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
        return (out);
}
