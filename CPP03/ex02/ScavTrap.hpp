#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include <string>
#include "./ClapTrap.hpp"

class ClapTrap;

class ScavTrap: public ClapTrap {
	private:

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &cp);
		~ScavTrap();
		
		void attack(const std::string &name);
		void guardGate();
};

#endif