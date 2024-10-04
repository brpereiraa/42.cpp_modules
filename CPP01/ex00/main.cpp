#include "./Zombie.hpp"

int main(int ac, char **av)
{
	(void)ac;
	(void)av;

	Zombie zombie("zombie");
	Zombie *juan = zombie.newZombie("juan");
	
	juan->announce();
	zombie.randomChump("zombie1");

	return (0);
}