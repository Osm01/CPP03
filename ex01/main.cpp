#include "ScavTrap.h"

int main(void)
{
	std::cout << GREEN << "|------------------|HEAP|------------------|" << RESET << std::endl;
	{
		// heap
		ScavTrap *scavTrap = new ScavTrap("R0");
		scavTrap->status();
		scavTrap->attack("IDRISSI");
		scavTrap->takeDamage(99);
		scavTrap->status();
		scavTrap->beRepaired(99);
		scavTrap->status();
		scavTrap->guardGate();
		delete scavTrap;
	}
	std::cout << GREEN << "|------------------|STACK|------------------|" << RESET << std::endl;
	{
		// stack
		ScavTrap scavTrap;
		scavTrap.status();
		scavTrap.attack("R1");
		scavTrap.takeDamage(100);
		scavTrap.status();
		scavTrap.beRepaired(100);
		scavTrap.status();
		scavTrap.guardGate();
	}
}