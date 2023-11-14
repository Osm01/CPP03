//
// Created by ouidriss on 11/13/23.
//

#ifndef CPP03_DIAMONDTRAP_H
#define CPP03_DIAMONDTRAP_H

#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap : public ScavTrap , public FragTrap {

private:
	std::string Name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	void	status(void);
	void	whoAmI();
	~DiamondTrap();
};


#endif //CPP03_DIAMONDTRAP_H
