#include <iostream>

Class ClapTrap(){
	private:
		std::string	name;
		int		hpoints;
		int		epoints;
		int		adamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &c);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);_
}
