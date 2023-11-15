
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

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << BLUE << "Calling copy constructor of FragTrap" << RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other){
	std::cout << PURPLE << "Calling copy assignment operator of FragTrap " << RESET << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

void	FragTrap::status(void)
{
	std::cout << std::left << std::setw(12) << "Hit Point";
	std::cout << " : " << GREEN << this->Hit_Point << "/" << "100" << RESET << std::endl;
	std::cout << std::setw(12) << "Energy Point";
	std::cout << " : " << BLUE << this->Energy_Point << "/" << "50" << RESET << std::endl;
	std::cout << std::setw(12) << "Energy Point";
	std::cout << " : " << RED << this->Attack_damage << "/" << "20" << RESET << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Give me some high fives, guys!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << RED << "Calling Destructor of FragTrap" << RESET << std::endl;
}