#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
        this->name = "Default";
        this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade){
	this->name = name;
	if (grade > 150)
		throw (Bureaucrat::GradeTooHighException());
	if (grade < 0)
		throw (Bureaucrat::GradeTooLowException());
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj){
        this->name = obj.getName();
}

const std::string Bureaucrat::getName() const { return this->name; }
const int Bureaucrat::getGrade() const { return this->grade; }

void Bureaucrat::Increment() {
        if (this->grade == 0)
                throw(GradeTooLowException());
        this->grade--;
}

void Bureaucrat::Decrement(){
        if (this->grade == 150)
                throw(GradeTooHighException());
        this->grade++;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj){
        out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
        return (out);
}
