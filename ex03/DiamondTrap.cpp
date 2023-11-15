
#include "DiamondTrap.h"

DiamondTrap::DiamondTrap() : Name("DiamondX")
{
	this->Hit_Point = 100;
	this->Energy_Point = 50;
	this->Attack_damage = 30;
	std::cout << GREEN << "Calling default constructor of DiamondTrap" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") , ScavTrap(name) , FragTrap(name) , Name(name)
{
	this->Hit_Point = 100;
	this->Energy_Point = 50;
	this->Attack_damage = 30;
	std::cout << YELLOW << "Calling parameter constructor of DiamondTrap" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other) , ScavTrap(other) , FragTrap(other)
{
	this->Name = other.Name;
	std::cout << BLUE << "Calling copy constructor of DiamondTrap" << RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other){
	std::cout << PURPLE << "Calling copy assignment operator of DiamondTrap" << RESET << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		this->Name = other.Name;
	}
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is : " << GREEN << Name << RESET << " and Claptrap name is : " << RED << ClapTrap::Name \
	<< RESET << std::endl;
}

void DiamondTrap::status()
{
	FragTrap::status();
}

DiamondTrap::~DiamondTrap()
{
	std::cout << RED << "Calling Destructor of DiamondTrap" << RESET << std::endl;
}
