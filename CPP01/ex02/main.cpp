#include <iostream>

int main(int ac, char **av){
	(void) ac;
	(void) av;

	std::string var = "This is brain";
	std::string *ptr = &var;
	std::string &ref = var;

	std::cout << "Mem address: " << &var << std::endl;
	std::cout << "Mem pointer: " << ptr << std::endl;
	std::cout << "Ref pointer: " << &ref << std::endl;
	return (0);
}
