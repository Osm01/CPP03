
#include "ScavTrap.h"

ScavTrap::ScavTrap()
{
	this->Hit_Point = 100;
	this->Energy_Point = 50;
	this->Attack_damage = 20;
	std::cout << GREEN << "Calling default constructor of ScavTrap" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->Hit_Point = 100;
	this->Energy_Point = 50;
	this->Attack_damage = 20;
	std::cout << YELLOW << "Calling parameter constructor of ScavTrap" << RESET << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->Energy_Point > 0 && this->Hit_Point > 0)
	{
		std::cout << "ScavTrap " << GREEN << this->Name <<  RESET << " attacks "<<  RED << target << RESET << " , causing "  \
		<< this->Attack_damage << " points of damage!" << RESET << std::endl;
		this->Energy_Point -= 1;
	}
	else
		std::cout << RED << "The ScavTrap " << this->Name << " have Insufficient energy point to attack or has wasted" \
		<< RESET <<std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "Calling Destructor of ScavTrap" << RESET << std::endl;
}
