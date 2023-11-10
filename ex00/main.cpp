#include "ClapTrap.h"

int main(void)
{
	int i = 0;
	ClapTrap clapTrap("OUSSAMA");
	while (i < 10)
	{
		clapTrap.takeDamage(1);
		i ++;
	}
	i = 0;
	while (i < 10)
	{
		clapTrap.attack("IDRISSI");
		i ++;
	}
	// check health
	clapTrap.beRepaired(10);
	clapTrap.beRepaired(10);
}