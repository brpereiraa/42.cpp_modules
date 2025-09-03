#include "Bureaucrat.hpp"
#include <exception>


//------------Constructors
Bureaucrat::Bureaucrat() : name("Default"), grade(1) {
	std::cout << "Default constructor for Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name){
	if (grade < 1) throw(GradeTooHighException());
	if (grade > 150) throw(GradeTooLowException());
	this->grade = grade;

	std::cout << "Named constructor for Bureaucrat called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Default destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.getName()), grade(other.getGrade()){
}

//------------Getters
std::string 	Bureaucrat::getName() const { return this->name; }
int 		Bureaucrat::getGrade() const { return this->grade; }

//------------Methods
void Bureaucrat::incrementGrade() {
	if (this->grade == 1) throw(GradeTooHighException());
	this->grade--;
}

void Bureaucrat::decrementGrade() {
	if (this->grade == 150) throw(GradeTooLowException());
	this->grade++;
}

void Bureaucrat::signForm(Form &other){
	try {
		other.beSigned(*this);
		std::cout << this->name << " signed " << other.getName() << std::endl;

	} catch (const std::exception &e) {
		std::cout << this->name << " couldn't sign " << other.getName() << " because grade wasn't high enough" << std::endl;
	}


}

//------------Exceptions
const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high exception" ;	
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low exception" ;	
}

//------------Override Operators
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other){
	if (this == &other)
		return *this;
	this->grade = other.getGrade();

	return *this;
}

std::ostream &operator <<(std::ostream &out, const Bureaucrat &other){
	out << other.getName() << ", bureaucrat grade " << other.getGrade();
	return out;
}
