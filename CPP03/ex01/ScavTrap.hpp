#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include <string>
#include "./ClapTrap.hpp"

class ScavTrap: ClapTrap {
	private:

	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &cp);
		~ScavTrap();
		
	
		void guardGate();
};

#endif