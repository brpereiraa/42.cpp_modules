#include "ShrubberyCreationForm.hpp"

//------------Constructors
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default", signGrade, execGrade, "Default"){
	std::cout << "Default constructor for ShrubberyCreationForm called" << std::endl; 
}

		
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", signGrade, execGrade, target){
	std::cout << "Named constructor for ShrubberyCreationForm called" << std::endl; 
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Destructor for ShrubberyCreationForm called" << std::endl; 
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other.getName(), signGrade, execGrade, other.getTarget()){
	std::cout << "Copy constructor for ShrubberyCreationForm called" << std::endl; 
}

//------------Methods
void ShrubberyCreationForm::executor() const {
	std::ofstream mFile((this->getTarget() + "_shrubbery").c_str());

	mFile << "    oxoxoo    ooxoo\n"
			<< "  ooxoxo oo  oxoxooo\n"
			<< " oooo xxoxoo ooo ooox\n"
			<< " oxo o oxoxo  xoxxoxo\n"
			<< "  oxo xooxoooo o ooo\n"
			<< "    ooo\\oo\\  /o/o\n"
			<< "        \\  \\/ /\n"
			<< "         |   /\n"
			<< "         |  |\n"
			<< "         | D|\n"
			<< "         |  |\n"
			<< "         |  |\n"
			<< "  ______/____\\____\n";
	mFile.close();
}

//------------Override Operators
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
    (void)other;
    return *this;
}
