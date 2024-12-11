#include "Harl.hpp"

int	main(void)
{
	Harl		harl;
	std::string	input;

	std::cout << "Available Commands: 1.DEBUG, 2.INFO, 3.WARNING, 4.ERROR" << std::endl;
	std::cout << "Select the number for the message you want displayed." << std::endl << std::endl;
	std::cout << "Command: ";

	while (std::getline(std::cin, input))
	{
		harl.complain(input);
		std::cout << "Command: ";
	}

	return (0);
}

