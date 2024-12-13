#include "./Zombie.hpp"

int main(int ac, char **av)
{
	(void)ac;
	(void)av;

	Zombie zombie("zombie");
	Zombie *juan = newZombie("juan");
	randomChump("chump");
	
	juan->announce();
	delete juan;

	return (0);
}
