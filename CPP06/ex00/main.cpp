#include "ScalarConverter.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cout << "Need 1 argument for the program to work." << std::endl;
		return (0);
	}

	ScalarConverter::convert(av[1]);

	return (0);
}
