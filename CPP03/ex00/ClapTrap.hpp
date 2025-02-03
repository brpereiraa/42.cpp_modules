#include <string>
#include <iostream>

class ClapTrap {
	private:
		std::string name;
		int			hpoints;
		int			epoints;
		int			apoints;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &cp);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &cp);

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};