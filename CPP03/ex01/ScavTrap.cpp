#include "./ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	this->hpoints = 100;
	this->epoints = 50;
	this->apoints = 20;

	std::cout << "ScavTrap " << this->name << " has been created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &cp): ClapTrap(cp){
	*this = cp;

	std::cout << "ScavTrap " << this->name << " has been created with copy constructor" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << this->name << " has been deleted" << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->name << " is now guarding the gate" << std::endl;
}