#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
	std::cout << "Constructor with paramater called" << std::endl;
	this->name = name;
	hpoints = 10;
	epoints = 10;
	adamage = 0;
}

ClapTrap::~ClapTrap(){ std::cout << "Destructor called" << std::endl; };

ClapTrap::ClapTrap(const ClapTrap &c){
	std::cout << "Copy constructor called" << std::endl;
	*this = c;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ct){
	if (this != &ct){
		this->name = ct.get_name();
		this->hpoints = ct.get_hp();
		this->epoints = ct.get_ep();
		this->adamage = ct.get_ad();
	}

	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->hpoints <= 0){
		std::cout << "ClapTrap " << this->name << " doesn't have any hp remaining to attack" << std::endl; 
		return ;
	}

	if (this->epoints <= 0){
		std::cout << "ClapTrap " << this->name << " doesn't have any energy points remaining" << std::endl;
		return ;
	}

	std::cout << "Claptrap " << this->name << " attacks " << target <<  ", causing " << this->adamage << " points of damage." << std::endl;
	
	this->epoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hpoints <= 0){
		std::cout << "ClapTrap " << this->name << " doesn't have any hp remaining to attack" << std::endl; 
		return ;
	}

	std::cout << "ClapTrap " << this->name << " has taken " << amount << " of damage." << std::endl;  
	this->hpoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hpoints <= 0){
		std::cout << "ClapTrap " << this->name << " doesn't have any hp remaining to attack" << std::endl; 
		return ;
	}

	if (this->epoints <= 0){
		std::cout << "ClapTrap " << this->name << " doesn't have any energy points remaining" << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->name << " has been repaired " << amount << " of damaged." << std::endl; 

	this->hpoints += amount;
	this->epoints--;
}

void	ClapTrap::info(){
	std::cout << std::endl << "----ClapTrap " << this->name << " Information----" << std::endl;
	std::cout << "Health: " << this->hpoints << std::endl;
	std::cout << "Energy points: " << this->epoints << std::endl;
	std::cout << "Attack damage: " << this->adamage << std::endl;
	std::cout << std::endl;
}

std::string	ClapTrap::get_name(void) const { return this->name; };
int		ClapTrap::get_hp(void) const { return this->hpoints; }; 
int		ClapTrap::get_ep(void) const { return this->epoints; };
int		ClapTrap::get_ad(void) const { return this->adamage; };

void	ClapTrap::set_name(std::string name) { this->name = name; };
void	ClapTrap::set_hp(int hp) { this->hpoints = hp; };
void	ClapTrap::set_ep(int ep) { this->epoints = ep; };
void	ClapTrap::set_ad(int ad) { this->adamage = ad; };
