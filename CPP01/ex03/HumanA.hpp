#include <iostream>
#include "./Weapon.hpp>

class HumanA(){
	private:
		Weapon		weapon;
		std::string	name;

	public:
		HumanA(Weapon weapon);
		~HumanA();
		HumanA(HumanA &copy);

		void	attack();

}
