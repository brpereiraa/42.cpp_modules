#include "./ClapTrap.hpp"

int main(void){
	ClapTrap A("Juan");
	ClapTrap B("Carlos");

	A.info();

	A.attack(B.get_name());
	A.info();

	A.takeDamage(4);
	A.info();

	//Out of energy test
	A.attack(B.get_name());
	A.attack(B.get_name());
	A.attack(B.get_name());
	A.attack(B.get_name());
	A.attack(B.get_name());
	A.attack(B.get_name());
	A.attack(B.get_name());
	A.attack(B.get_name());
	A.attack(B.get_name());
	A.attack(B.get_name());
	return  (0);
}
