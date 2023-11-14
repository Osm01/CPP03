#include "ClapTrap.h"

int main(void)
{
	int i = 0;
	ClapTrap clapTrap("OUSSAMA");
	clapTrap.status();
	while (i < 10)
	{
		clapTrap.takeDamage(1);
		i ++;
	}
	clapTrap.status();
	i = 0;
	while (i < 10)
	{
		clapTrap.attack("IDRISSI");
		i ++;
	}
	// check health
	clapTrap.status();
	clapTrap.beRepaired(10);
}