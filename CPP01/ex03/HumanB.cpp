#include "./HumanB.hpp"

HumanB::HumanB(std::string name){ 
        this->name = name;
        std::cout << "Default constructor called" << std::endl; 
};

HumanB::~HumanB(){ std::cout << "HumanB has been destroyed" << std::endl; }

void	HumanB::attack(){
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon weapon){
        this->weapon = &weapon;
}
