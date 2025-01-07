#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(){
	this->name = "default";
	this->hpoints = 10;
	this->apoints = 0;
	this->epoints = 10;

	std::cout << "Default constructor for claptrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	this->name = name;
	this->hpoints = 10;
	this->apoints = 0;
	this->epoints = 10;

	std::cout << "ClapTrap " << this->name << " has been created" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << this->name << " has been deleted" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &cp){
	*this = cp;

	std::cout << "ClapTrap " << this->name << " has been created with copy constructor" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cp){
	if (this !=	&cp){
		this->name = cp.name;
		this->hpoints = cp.hpoints;
		this->apoints = cp.apoints;
		this->epoints = cp.epoints;
	}

	return (*this);
}

void ClapTrap::attack(const std::string &target){
	if (this->epoints == 0 || this->hpoints == 0 ){
		std::cout << "ClapTrap has no energy points left to attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->apoints << " points of damage" << std::endl; 
	this->epoints--;

}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->hpoints == 0){
		std::cout << "This ClapTrap has no hp points remaining to be taken" << std::endl;
	}
	std::cout << "ClapTrap " << this->name << " has taken " << amount << " amount of damage" << std::endl; 

	this->hpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->epoints == 0 || this->hpoints == 0){
		std::cout << "ClapTrap has no energy points left to repair itself" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " has been repaired " << amount << " health points" << std::endl; 
	this->epoints--;
}