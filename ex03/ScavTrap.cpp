
#include "ScavTrap.h"

ScavTrap::ScavTrap()
{
	std::cout << GREEN << "Calling default constructor of ScavTrap" << RESET << std::endl;
	this->Name = "ScavTrapX";
	this->Hit_Point = 100;
	this->Energy_Point = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << YELLOW << "Calling parameter constructor of ScavTrap" << RESET << std::endl;
	this->Hit_Point = 100;
	this->Energy_Point = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << BLUE << "Calling copy constructor of ScavTrap" << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other){
	std::cout << PURPLE << "Calling copy assignment operator of ScavTrap" << RESET << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
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

void ScavTrap::status()
{
	std::cout << std::left << std::setw(12) << "Hit Point";
	std::cout << " : " << GREEN << this->Hit_Point << "/" << "100" << RESET << std::endl;
	std::cout << std::setw(12) << "Energy Point";
	std::cout << " : " << BLUE << this->Energy_Point << "/" << "50" << RESET << std::endl;
	std::cout << std::setw(12) << "Energy Point";
	std::cout << " : " << RED << this->Attack_damage << "/" << "20" << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "Calling Destructor of ScavTrap" << RESET << std::endl;
}
