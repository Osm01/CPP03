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
	std::cout << GREEN << "|------------------|COPY TEST |------------------|" << RESET << std::endl;
	{
		ScavTrap scavTrap("C0");
		scavTrap.status();
		scavTrap.attack("R1");
		scavTrap.takeDamage(99);
		scavTrap.status();
		ScavTrap scavTrap1 = scavTrap;
		scavTrap1.status();
		scavTrap1.beRepaired(99);
		scavTrap1.status();
		scavTrap1.attack("Idrissi");
		ClapTrap trap = scavTrap1;
		trap.attack("IDRISsi");
	}
}