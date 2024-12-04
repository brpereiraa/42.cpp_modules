#include <string>
#include <iostream>

class Zombie {
	private:
		std::string name;

	public:
		Zombie();
		Zombie(std::string name);
    ~Zombie();

		Zombie	*newZombie(std::string);
		void	randomChump(std::string);
		void	announce(void);
};
