#include "./HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon){ 
        this->name = name;
        std::cout << "Default constructor called" << std::endl;
};

HumanA::~HumanA(){ std::cout << "Human has been destroyed" << std::endl; }

void	HumanA::attack(){
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
