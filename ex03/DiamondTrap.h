//
// Created by ouidriss on 11/13/23.
//

#ifndef CPP03_DIAMONDTRAP_H
#define CPP03_DIAMONDTRAP_H

#include "ScavTrap.h"
#include "FragTrap.h"
#include "ClapTrap.h"

class DiamondTrap : public ScavTrap , public FragTrap {

private:
	std::string Name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &other);
	DiamondTrap	&operator=(const DiamondTrap &other);
	void		attack(const std::string& target);
	void		status(void);
	void		whoAmI();
	virtual ~DiamondTrap();
};


#endif //CPP03_DIAMONDTRAP_H
