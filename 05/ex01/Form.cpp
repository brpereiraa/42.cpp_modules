#include "Form.hpp"

//------------Constructors
Form::Form() : name("Default"), signGrade(1), execGrade(1), sign(false){
	std::cout << "Default constructor for form called" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade) : name(name), signGrade(signGrade), execGrade(execGrade), sign(false) {
	std::cout << "Named constructor for form called" << std::endl;
}

Form::Form(const Form &other) : name(other.getName()), signGrade(other.getSignGrade()), execGrade(other.getExecGrade()), sign(false) { 
	std::cout << "Copy constructor for form called" << std::endl;
}

Form::~Form() { std::cout << "Default constructor called" << std::endl; }

//------------Getters
int			Form::getSignGrade() const { return this->signGrade; }
int			Form::getExecGrade() const { return this->execGrade; }
bool		Form::getSign() const { return this->sign; }
std::string	Form::getName() const { return this->name; }

//------------Methods
void Form::beSigned(Bureaucrat &other) {
	if (other.getGrade() > this->signGrade) throw(GradeTooLowException());

	this->sign = true;
}

//------------Exceptions
const char *Form::GradeTooHighException::what() const throw() {
	return "Grade too high exception" ;	
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade too low exception" ;	
}

//------------Override Operators
Form &Form::operator=(const Form &other){
	if (this == &other) return *this;

	this->sign = other.getSign();

	return *this;
}

std::ostream &operator<<(std::ostream &out, const Form &other){
	out << other.getName() << ", Form grade " << other.getSign()
		<< "\nSign Grade: " << other.getSignGrade()
		<< "\nExec Grade: " << other.getExecGrade();
	return out;
}
