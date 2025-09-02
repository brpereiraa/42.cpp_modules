
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>

void	decrement_exception()
{
	Bureaucrat second("Bash", 150);
	std::cout << second << std::endl;
	try
	{
		second.decrementGrade();
		std::cout << second << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void increment_exception()
{
	Bureaucrat third("Shell", 1);
	std::cout << third << std::endl;
	try
	{
		third.incrementGrade();
		std::cout << third << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	increment_decrement_test()
{
	Bureaucrat first("Turq", 140);
	std::cout << first << std::endl;
	try
	{
		first.incrementGrade();
		std::cout << first << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		first.decrementGrade();
		std::cout << first << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	start_test()
{
	std::cout << std::endl;
	increment_decrement_test();
	std::cout << std::endl;
	increment_exception();
	std::cout << std::endl;
	decrement_exception();
}

int	main()
{
	srand(std::time(0));
	int grade = rand() % 300;
	
	try
	{
		Bureaucrat lol("Jonh", grade);
		std::cout << lol << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	start_test();
}