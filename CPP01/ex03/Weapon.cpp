#include "./Weapon.hpp"
#include <ostream>

Weapon::Weapon(){}
Weapon::Weapon(std::string type){ this->type = type; }
Weapon::~Weapon(){ std::cout << "Weapon has been destroyed." << std::endl; }

std::string Weapon::getType(){ return this->type; }
void        Weapon::setType(std::string type){ this->type = type; }
