#include <string>
#include <iostream>

class Zombie {
	private:
		std::string name;

	public:
		Zombie();
		Zombie(std::string name);

		void	announce(void);
		Zombie	*zombieHorde(int N, std::string name);
};