#include "./FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){
    this->hpoints = 100;
    this->epoints = 100;
    this->apoints = 30;
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
    this->hpoints = 100;
    this->epoints = 100;
    this->apoints = 30;
	std::cout << "FrapTrap " << this->name << " has been created" << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap " << this->name << " has been destroyed" << std::endl;
}

FragTrap::FragTrap(FragTrap &cp): ClapTrap(cp){
    *this = cp;

    std::cout << "FragTRap copy constructor called" << std::endl;
}

void FragTrap::highFivesGuys(){
    std::cout << "FragTrap " << this->name << " requests a high five" << std::endl;
}