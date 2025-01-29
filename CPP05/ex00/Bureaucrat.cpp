#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, int grade){
	this->name = name;
	if (grade > 150)
		throw (Bureaucrat::GradeTooHighException());
	if (grade < 0)
		throw (Bureaucrat::GradeTooLowException());
	this->grade = grade;
}