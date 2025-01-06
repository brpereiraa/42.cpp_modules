#include "./ClapTrap.hpp"

int main(void){
	ClapTrap A("Juan");
	ClapTrap B("Carlos");
	ClapTrap C = B;


	A.attack("Carlos");
	A.beRepaired(10);
	A.takeDamage(10);

	A.attack("Carlos");
	A.attack("Carlos");
	A.attack("Carlos");
	A.attack("Carlos");
	A.attack("Carlos");
	A.attack("Carlos");
	A.attack("Carlos");
	A.attack("Carlos");
	A.attack("Carlos");

	return  (0);
}
