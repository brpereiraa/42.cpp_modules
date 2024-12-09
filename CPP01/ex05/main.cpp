#include "Harl.hpp"

void	printWelcome()
{
	std::cout << "\033c";
	std::cout << "Welcome to Harl 2.0" << std::endl;
	std::cout << "Available Commands: 1.DEBUG, 2.INFO, 3.WARNING, 4.ERROR" << std::endl;
	std::cout << "Select the number for the message you want displayed." << std::endl << std::endl;
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
