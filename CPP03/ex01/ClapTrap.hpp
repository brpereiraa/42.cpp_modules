#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap {
	protected:
		std::string name;
		int			hpoints;
		int			epoints;
		int			apoints;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &cp);
		virtual ~ClapTrap();
		ClapTrap &operator=(const ClapTrap &cp);

		virtual void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif