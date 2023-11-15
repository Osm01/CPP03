
#include "FragTrap.h"

int main(void)
{
	FragTrap	fragTrap("F0");
	fragTrap.status();
	fragTrap.attack("IDRISSI");
	fragTrap.status();
	FragTrap	fragTrap1 = fragTrap;
	fragTrap1.status();
	fragTrap1.highFivesGuys();
	// upcast allow
	ClapTrap	clapTrap = fragTrap1;
	clapTrap.takeDamage(50);
	// downcast not allow
//	FragTrap	fragTrap2 = clapTrap;
//	fragTrap2.status();
}