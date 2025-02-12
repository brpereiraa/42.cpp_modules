#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(){
	this->name = "Default";
	this->hpoints = 10;
	this->epoints = 10;
	this->apoints = 0;
	std::cout << "ClapTrap named 'Default' has been created." << std::endl;
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

//-------------------------------------

std::string ClapTrap::getName(){ return (this->name); }
int ClapTrap::getHPoints(){ return (this->hpoints); }
int ClapTrap::getEPoints(){ return (this->epoints); }
int ClapTrap::getAPoints(){ return (this->apoints); }

void ClapTrap::setEpoints(int points) {  this->epoints = points; }
void ClapTrap::setHpoints(int points) {  this->hpoints = points; }

//-------------------------------------

ClapTrap &ClapTrap::operator=(const ClapTrap &cp){
	if (this != &cp){
		this->name = cp.name;
		this->hpoints = cp.hpoints;
		this->apoints = cp.apoints;
		this->epoints = cp.epoints;
	}

	return (*this);
}

void ClapTrap::attack(const std::string &target){
	if (this->epoints == 0){
		std::cout << "ClapTrap has no energy points left to attack" << std::endl;
		return ;
	}
	if (this->hpoints == 0 ){
		std::cout << "ClapTrap has no hit points left to attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->apoints << " points of damage" << std::endl; 
	this->epoints--;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->hpoints == 0 ){
		std::cout << "This ClapTrap has no hp points remaining to be taken" << std::endl;
		return ;
	}

	this->hpoints -= amount;
	if (this->hpoints < 0)
		this->hpoints = 0;
	std::cout << "ClapTrap " << this->name << " has taken " << amount << " amount of damage. It has " << this->hpoints << " hp remaining." << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->epoints == 0 ){
		std::cout << "ClapTrap has no energy points left to repair itself" << std::endl;
		return ;
	}
	if (this->hpoints == 0 ){
		std::cout << "ClapTrap has no hit points left to repair itself" << std::endl;
		return ;
	}
	this->epoints--;
	this->hpoints += amount;
	std::cout << "ClapTrap " << this->name << " has been repaired " << amount << " health points. It has " << this->hpoints << " hp remaining." << std::endl; 
}