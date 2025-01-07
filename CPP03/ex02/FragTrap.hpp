#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include <string>
#include "./ClapTrap.hpp"

class FragTrap: ClapTrap {
	private:

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap &cp);
		~FragTrap();
		
		void highFivesGuys(void);
};

#endif