
#ifndef CPP03_CLAPTRAP_H
# define CPP03_CLAPTRAP_H

# include <iostream>
# include <iomanip>

# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[35m"
# define CYAN "\033[36m"
# define RESET "\033[0m"

class ClapTrap {
private:
	std::string Name;
	int 		Hit_Point;
	int 		Energy_Point;
	int 		Attack_damage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap	&operator=(const ClapTrap &other);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		status(void );
	~ClapTrap();
};


#endif //CPP03_CLAPTRAP_H
