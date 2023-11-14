NAME = ScavTrap

COMPIs = c++ -std=c++98
ERRORS = -Wall -Wextra -Werror

FILES = ClapTrap.cpp main.cpp ScavTrap.cpp

all : $(NAME)

$(NAME) : $(FILES)
	$(COMPIs) $(ERRORS) $(FILES) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all
