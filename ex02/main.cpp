
#include "FragTrap.h"

int main(void)
{
	FragTrap	fragTrap("F0");
	fragTrap.status();
	fragTrap.attack("IDRISSI");
	fragTrap.status();
	fragTrap.takeDamage(99);
	fragTrap.status();
	fragTrap.beRepaired(99);
	fragTrap.status();
	fragTrap.highFivesGuys();
}