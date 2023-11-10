
#include "ClapTrap.h"

ClapTrap::ClapTrap() : Hit_Point(10) , Energy_Point(10) , Attack_damage(0)
{
	std::cout << GREEN << "Calling default constructor" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name) , Hit_Point(10) , Energy_Point(10) , Attack_damage(0)
{
	std::cout << YELLOW << "Calling parameter constructor" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other): Name(other.Name) , Hit_Point(other.Hit_Point) , \
											Energy_Point(other.Energy_Point) ,Attack_damage(other.Attack_damage)
{
	std::cout << BLUE << "Calling copy constructor" << RESET << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &other){
	std::cout << PURPLE << "Calling copy assignment operator " << RESET << std::endl;
	if (this != &other)
	{
		this->Name = other.Name;
		this->Hit_Point = other.Hit_Point;
		this->Energy_Point = other.Energy_Point;
		this->Attack_damage = other.Attack_damage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->Energy_Point > 0 && this->Hit_Point > 0)
	{
		std::cout << "ClapTrap " << GREEN << this->Name <<  RESET << " attacks "<<  RED << target << RESET << " , causing "  << this->Attack_damage << " points of damage!" << RESET << std::endl;
		this->Energy_Point -= 1;
	}
	else
		std::cout << RED << "The ClapTrap " << this->Name <<" Insufficient energy point to attack or has wasted" << RESET <<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hit_Point > 0)
	{
		std::cout << "ClapTrap " << GREEN << this->Name << RESET <<" taken " << RED << amount <<  RESET << " damage" << std::endl;
		this->Hit_Point -= amount;
		if (this->Hit_Point < 0)
			this->Hit_Point = 0;
	}
	else
		std::cout << RED << "ClapTrap " << this->Name << " wasted" << RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy_Point > 0)
	{
		std::cout << "ClapTrap " << this->Name << " Repairing " << GREEN << amount << RESET  << " From " << this-> Hit_Point << std::endl;
		this->Hit_Point += amount;
		this->Energy_Point -= 1;
	}
	else
		std::cout << RED << "The ClapTrap " << this->Name << " Insufficient energy to repair" << RESET <<std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "Calling Destructor" << RESET << std::endl;
}