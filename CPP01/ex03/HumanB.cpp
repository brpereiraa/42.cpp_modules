#include "./HumanB.hpp"

HumanB::HumanB(){ std::cout << "Default constructor called" << std::endl; };

HumanB::~HumanB(){ std::cout << "Default destructor called" << std::endl; };

void	HumanB::attack(){
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
