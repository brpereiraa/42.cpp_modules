#include "PresidentialPardonForm.hpp"

//------------Constructors
PresidentialPardonForm::PresidentialPardonForm() : AForm("Default", signGrade, execGrade, "Default"){
	std::cout << "Default constructor for PresidentialPardonForm called" << std::endl; 
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", signGrade, execGrade, target){
	std::cout << "Named constructor for PresidentialPardonForm called" << std::endl; 
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "Destructor for PresidentialPardonForm called" << std::endl; 
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other.getName(), signGrade, execGrade, other.getTarget()){
	std::cout << "Copy constructor for PresidentialPardonForm called" << std::endl; 
}

//------------Methods
void PresidentialPardonForm::executor() const {
	std::cout << this->getTarget()
			  << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

//------------Override Operators
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
    (void)other;
    return *this;
}
