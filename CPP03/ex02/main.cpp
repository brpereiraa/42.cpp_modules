#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>
#include <limits>
#include <cstdlib>

void displayTitle(const std::string &title)
{
	std::cout << "\033[1;36m\n=== " << title << " ===\033[0m\n" << std::endl;
}

void displaySubtitle(const std::string &subtitle)
{
	std::cout << "\033[1;33m\n" << subtitle << "\033[0m\n" << std::endl;
}

void pauseExecution()
{
	std::cout << "\033[1;35mPress Enter to continue...\033[0m" << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	system("clear");
}

int main()
{
	system("clear");
	displayTitle("Constructors");
	ClapTrap defaultClap;
	std::cout << std::endl;
	ClapTrap clap("Clapy");
	std::cout << std::endl;
	ScavTrap defaultScav;
	std::cout << std::endl;
	ScavTrap scav("Scavy");
	std::cout << std::endl;
	FragTrap defaultFrag;
	std::cout << std::endl;
	FragTrap frag("Fragy");
	std::cout << std::endl;
	ClapTrap copyClap(clap);
	std::cout << std::endl;
	ScavTrap copyScav(scav);
	std::cout << std::endl;
	FragTrap copyFrag(frag);
	std::cout << std::endl;
	pauseExecution();

	displayTitle("ClapTrap Class Tests");
	displaySubtitle("Basic Functionality");
	clap.attack("target1");
	clap.takeDamage(5);
	clap.beRepaired(3);
	pauseExecution();

	displayTitle("ClapTrap Class Tests");
	displaySubtitle("Edge Cases");

	std::cout << "\033[1;31mTesting: Taking more damage than hit points.\033[0m \033[1;37m(Expected: HP should reduce to 0 but not go negative.)\033[0m\n";
	clap.takeDamage(15);

	std::cout << "\033[1;31mTesting: Attempting to attack with zero hit points.\033[0m \033[1;37m(Expected: Attack should not be allowed.)\033[0m\n";
	clap.attack("target2");

	std::cout << "\033[1;31mTesting: Repairing after reaching zero hit points.\033[0m \033[1;37m(Expected: Repair should not be allowed.)\033[0m\n";
	clap.beRepaired(5);
	pauseExecution();

	displayTitle("ClapTrap Class Tests");
	displaySubtitle("Energy Depletion");

	std::cout << "\033[1;32mTesting: Attacking until energy points reach zero.\033[0m \033[1;37m(Expected: Energy decreases with each attack.)\033[0m\n";
	clap.setHpoints(5);
	while (clap.getEPoints() > 0)
	{
		std::cout << "\033[1;34mEnergy Points: " << clap.getEPoints() << "\033[0m ";
		clap.attack("Energy Target");
	}

	std::cout << "\033[1;31mTesting: Attempting to attack with zero energy points.\033[0m \033[1;37m(Expected: Attack should not be allowed.)\033[0m\n";
	clap.attack("Out of Energy");
	pauseExecution();

	displayTitle("ScavTrap Class Tests");
	displaySubtitle("Basic Functionality");
	scav.attack("target2");
	scav.takeDamage(20);
	scav.beRepaired(10);
	scav.guardGate();
	pauseExecution();

	displayTitle("ScavTrap Class Tests");
	displaySubtitle("Edge Cases");

	std::cout << "\033[1;31mTesting: Taking significant damage.\033[0m \033[1;37m(Expected: HP should reduce but not go negative.)\033[0m\n";
	scav.takeDamage(900);

	std::cout << "\033[1;31mTesting: Attempting to attack with low energy points.\033[0m \033[1;37m(Expected: Attack should not be allowed.)\033[0m\n";
	scav.attack("target3");

	std::cout << "\033[1;31mTesting: Repairing after low energy points.\033[0m \033[1;37m(Expected: Repair should not be allowed.)\033[0m\n";
	scav.beRepaired(50);
	pauseExecution();

	displayTitle("ScavTrap Class Tests");
	displaySubtitle("Energy Depletion");

	std::cout << "\033[1;32mTesting: Attacking until energy points reach zero.\033[0m \033[1;37m(Expected: Energy decreases with each attack.)\033[0m\n";
	scav.setHpoints(6);
	while (scav.getEPoints() > 0)
	{
		std::cout << "\033[1;34mEnergy Points: " << scav.getEPoints() << "\033[0m ";
		scav.attack("Energy Target");
	}

	std::cout << "\033[1;31mTesting: Attempting to attack with zero energy points.\033[0m \033[1;37m(Expected: Attack should not be allowed.)\033[0m\n";
	scav.attack("Out of Energy");
	pauseExecution();

	displayTitle("FragTrap Class Tests");
	displaySubtitle("Basic Functionality");
	frag.attack("target3");
	frag.takeDamage(50);
	frag.beRepaired(25);
	frag.highFivesGuys();
	pauseExecution();

	displayTitle("FragTrap Class Tests");
	displaySubtitle("Edge Cases");

	std::cout << "\033[1;31mTesting: Taking fatal damage.\033[0m \033[1;37m(Expected: HP should reduce to 0 but not go negative.)\033[0m\n";
	frag.takeDamage(100);

	std::cout << "\033[1;31mTesting: Repairing after fatal damage.\033[0m \033[1;37m(Expected: Repair should not be allowed.)\033[0m\n";
	frag.beRepaired(50);

	std::cout << "\033[1;31mTesting: Attempting to attack with zero hit points.\033[0m \033[1;37m(Expected: Attack should not be allowed.)\033[0m\n";
	frag.attack("target4");
	pauseExecution();

	displayTitle("FragTrap Class Tests");
	displaySubtitle("Energy Depletion");

	std::cout << "\033[1;32mTesting: Attacking until energy points reach zero.\033[0m \033[1;37m(Expected: Energy decreases with each attack.)\033[0m\n";
	frag.setHpoints(5);
	while (frag.getEPoints() > 0)
	{
		std::cout << "\033[1;34mEnergy Points: " << frag.getEPoints() << "\033[0m ";
		frag.attack("Energy Target");
	}

	std::cout << "\033[1;31mTesting: Attempting to attack with zero energy points.\033[0m \033[1;37m(Expected: Attack should not be allowed.)\033[0m\n";
	frag.attack("Out of Energy");
	pauseExecution();

	displayTitle("Destructors");

	return 0;
}