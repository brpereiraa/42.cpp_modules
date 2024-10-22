#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
	this->name = name;
	hpoints = 10;
	epoints = 10;
	adamage = 0;
}

ClapTrap::~ClapTrap(){ "Destructor called"; };

ClapTrap::ClapTrap(const ClapTrap &c){
	std::cout << "Copy constructor called" << std::endl;
	*this = c;
}
