#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <cstdlib>
#include <ctime>

int	main()
{	
	Bureaucrat	bureaucrat("John", 140);
	Form		firstForm("Build", 150, 150);
	Form		secondForm("Work", 130, 130);

	bureaucrat.signForm(firstForm);
	bureaucrat.signForm(secondForm);
	
	return (0);
}
