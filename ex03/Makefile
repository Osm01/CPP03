NAME = diamondtrap

COMPIs = c++ -std=c++98
ERRORS = -Wall -Wextra -Werror

FILES = main.cpp ./FragTrap.cpp ./DiamondTrap.cpp ./ClapTrap.cpp ./ScavTrap.cpp


all : $(NAME)

$(NAME) : $(FILES)
	$(COMPIs) $(ERRORS) $(FILES) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all
