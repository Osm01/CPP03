
#ifndef CPP03_SCAVTRAP_H
#define CPP03_SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : virtual public ClapTrap{
public:
	ScavTrap();
	ScavTrap(std::string name);
	void		attack(const std::string& target);
	void	guardGate(void);
	~ScavTrap();
};


#endif //CPP03_SCAVTRAP_H
