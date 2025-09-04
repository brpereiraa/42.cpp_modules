#include "RobotomyRequestForm.hpp"

//------------Constructors
RobotomyRequestForm::RobotomyRequestForm() : AForm("Default", signGrade, execGrade, "Default"){
	std::cout << "Default constructor for RobotomyRequestForm called" << std::endl; 
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", signGrade, execGrade, target){
	std::cout << "Named constructor for RobotomyRequestForm called" << std::endl; 
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Destructor for RobotomyRequestForm called" << std::endl; 
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other.getName(), signGrade, execGrade, other.getTarget()){
	std::cout << "Copy constructor for RobotomyRequestForm called" << std::endl; 
}

//------------Methods
void RobotomyRequestForm::executor() const {
	srand(std::time(0));
	int value = rand() % 2;
	
	if (value == 1)
	{
		std::cout << "Drilling Noises. " << this->getTarget()
				  << " has been robotomized successfully" << std::endl;
	}
	else
		std::cout << "Robotomy failed" << std::endl;
}
