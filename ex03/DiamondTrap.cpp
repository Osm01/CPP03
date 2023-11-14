
#include "DiamondTrap.h"

DiamondTrap::DiamondTrap() : Name("DiamondX")
{
	this->Hit_Point = FragTrap::Hit_Point;
	this->Energy_Point = ScavTrap::Energy_Point;
	this->Attack_damage = FragTrap::Attack_damage;
	std::cout << GREEN << "Calling default constructor of DiamondTrap" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") , ScavTrap(name) , FragTrap(name) , Name(name)
{
	this->Hit_Point = 100;
	this->Energy_Point = 50;
	this->Attack_damage = 30;
	std::cout << YELLOW << "Calling parameter constructor of DiamondTrap" << RESET << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is : " << GREEN << Name << RESET << " and Claptrap name is : " << RED << ClapTrap::Name \
	<< RESET << std::endl;
}

void DiamondTrap::status()
{
	std::cout << std::left << std::setw(12) << "Hit Point";
	std::cout << " : " << GREEN << this->Hit_Point << "/" << "100" << RESET << std::endl;
	std::cout << std::setw(12) << "Energy Point";
	std::cout << " : " << BLUE << this->Energy_Point << "/" << "50" << RESET << std::endl;
	std::cout << std::setw(12) << "Energy Point";
	std::cout << " : " << RED << this->Attack_damage << "/" << "30" << RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << RED << "Calling Destructor of DiamondTrap" << RESET << std::endl;
}
