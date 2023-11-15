
#ifndef CPP03_FRAGTRAP_H
#define CPP03_FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : virtual public ClapTrap{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &other);
	FragTrap	&operator=(const FragTrap &other);
	void		status(void);
	void		highFivesGuys(void);
	~FragTrap();
};


#endif //CPP03_FRAGTRAP_H
