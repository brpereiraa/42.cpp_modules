#include "./Phonebook.hpp"

int main(int ac, char **av)
{
	(void)ac;
	(void)av;

	Phonebook phonebook;

	for(int i=0; i<3; i++){
		phonebook.add();
	}
	phonebook.search();
	return (0);
}
