#include <iostream>

int main(int ac, char **av)
{
	for(int i=1; av[i]; i++){
		for(int j=0; av[i][j]; j++)
			std::cout << (char)toupper(av[i][j]);
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}