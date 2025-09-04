#include "AForm.hpp"
#include <exception>

//------------Constructors
AForm::AForm() : name("Default"), signGrade(1), execGrade(1), sign(false){
	std::cout << "Default constructor for Aform called" << std::endl;
}

AForm::AForm(std::string name, int signGrade, int execGrade, std::string target) : name(name), signGrade(signGrade), execGrade(execGrade), sign(false), target(target) {
	std::cout << "Named constructor for Aform called" << std::endl;
}

AForm::AForm(const AForm &other) : name(other.getName()), signGrade(other.getSignGrade()), execGrade(other.getExecGrade()), sign(false), target(other.getTarget()) { 
	std::cout << "Copy constructor for Aform called" << std::endl;
}

AForm::~AForm() { std::cout << "Default constructor called" << std::endl; }

//------------Getters
int			AForm::getSignGrade() const { return this->signGrade; }
int			AForm::getExecGrade() const { return this->execGrade; }
bool		AForm::getSign() const { return this->sign; }
std::string	AForm::getName() const { return this->name; }
std::string	AForm::getTarget() const { return this->target; }

//------------Methods
void AForm::beSigned(Bureaucrat &other) {
	if (other.getGrade() > this->signGrade) throw(GradeTooLowException());

	this->sign = true;
}

void AForm::execute(Bureaucrat const &executor) const{
	try {
		executor.executeForm(*this);
	} catch (const std::exception &e) {
		std::cout << "Form not signed" << std::endl;
	}

}

//------------Exceptions
const char *AForm::GradeTooHighException::what() const throw() {
	return "Grade too high exception" ;	
}

const char *AForm::GradeTooLowException::what() const throw() {
	return "Grade too low exception" ;	
}

//------------Override Operators
AForm &AForm::operator=(const AForm &other){
	if (this == &other) return *this;

	this->sign = other.getSign();

	return *this;
}

std::ostream &operator<<(std::ostream &out, const AForm &other){
	out << other.getName() << ", AForm grade " << other.getSign()
		<< "\nSign Grade: " << other.getSignGrade()
		<< "\nExec Grade: " << other.getExecGrade();
	return out;
}
