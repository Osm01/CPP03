
#include "FragTrap.h"

FragTrap::FragTrap()
{
	this->Hit_Point = 100;
	this->Energy_Point = 100;
	this->Attack_damage = 30;
	std::cout << GREEN << "Calling default constructor of FragTrap" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->Hit_Point = 100;
	this->Energy_Point = 100;
	this->Attack_damage = 30;
	std::cout << YELLOW << "Calling parameter constructor of FragTrap" << RESET << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Give me some high fives, guys!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << RED << "Calling Destructor of FragTrap" << RESET << std::endl;
}