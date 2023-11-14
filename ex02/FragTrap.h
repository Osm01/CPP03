
#ifndef CPP03_FRAGTRAP_H
#define CPP03_FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap{
public:
	FragTrap();
	FragTrap(std::string name);
	void	highFivesGuys(void);
	void	status(void);
	~FragTrap();
};


#endif //CPP03_FRAGTRAP_H
