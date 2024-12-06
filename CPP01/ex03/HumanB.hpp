#include <iostream>
#include "./Weapon.hpp"

class HumanB{
	private:
		Weapon		weapon;
		std::string	name;
	
	public:
		HumanB();
		~HumanB();
		HumanB(HumanB &copy);

		void	attack();
};
