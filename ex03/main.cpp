#include "DiamondTrap.h"

int main(void)
{
	DiamondTrap diamondTrap("Oussama");
	diamondTrap.whoAmI();
	diamondTrap.guardGate();
	diamondTrap.highFivesGuys();
	diamondTrap.status();
	diamondTrap.attack("IDRISSI");
	diamondTrap.status();
	diamondTrap.takeDamage(100);
	diamondTrap.status();
	diamondTrap.beRepaired(50);
	diamondTrap.status();
}