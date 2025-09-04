#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

void	shrubberyTest()
{
	AForm *shrubbery = new ShrubberyCreationForm("Home");
	Bureaucrat john("John", 30);

	try
	{
		shrubbery->executor();
		shrubbery->beSigned(john);
		shrubbery->execute(john);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n";
	}	
	delete shrubbery;
}

void bureaucratExecutor()
{
	Bureaucrat john("John", 1);
	AForm *shrubbery = new ShrubberyCreationForm("Home");

	std::cout << std::endl;
	try
	{
		shrubbery->beSigned(john);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	john.executeForm(*shrubbery);
	
	delete shrubbery;
}

int	main()
{
	shrubberyTest();
	std::cout << std::endl;
	bureaucratExecutor();
	return (0);
}
