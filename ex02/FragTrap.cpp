//
// Created by ouidriss on 11/11/23.
//

#include "FragTrap.h"

FragTrap::FragTrap()
{
	this->Name = "FragTrapX";
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

void FragTrap::status()
{
	std::cout << std::left << std::setw(12) << "Hit Point";
	std::cout << " : " << GREEN << this->Hit_Point << "/" << "100" << RESET << std::endl;
	std::cout << std::setw(12) << "Energy Point";
	std::cout << " : " << BLUE << this->Energy_Point << "/" << "100" << RESET << std::endl;
	std::cout << std::setw(12) << "Energy Point";
	std::cout << " : " << RED << this->Attack_damage << "/" << "30" << RESET << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << RED << "Calling Destructor of FragTrap" << RESET << std::endl;
}