#include "Harl.hpp"

void	printWelcome()
{
	std::cout << "\033c";
	std::cout << "Welcome to Harl 2.0" << std::endl;
	std::cout << "Available Commands: DEBUG, INFO, WARNING, ERROR" << std::endl;
}

int	main(void)
{
	Harl		harl;
	std::string	input;

	printWelcome();
	std::cout << "Command: ";
	while (std::getline(std::cin, input))
	{
		harl.complain(input);
		std::cout << "Command: ";
	}
	return (0);
}
