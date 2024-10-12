#include "./Phonebook.hpp"

int main(int ac, char **av)
{
	(void)ac;
	(void)av;

	Phonebook	phonebook;
	std::string	option;

	while(true){

		std::cout << "Select desired command:" << std::endl;
		std::cout << "ADD" << std::endl;
		std::cout << "SEARCH" << std::endl;
		std::cout << "EXIT" << std::endl;
		std::getline(std::cin, option);

		if (!option.compare("ADD"))
			phonebook.add();
		else if (!option.compare("SEARCH"))
			phonebook.search();
		else if (!option.compare("EXIT"))
			break ;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}
