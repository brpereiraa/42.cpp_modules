#include <iostream>

class Weapon(){
	private:
		std::string type;

	public:
		Weapon();
		~Weapon();
		Weapon(Weapon &weapon);

		std::string	getType();
		void		setType();


}
