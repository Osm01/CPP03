NAME = fragtrap

CXX = c++ -std=c++98
CXXFLAGS = -Wall -Wextra -Werror

FILES = ClapTrap.cpp main.cpp FragTrap.cpp

all : $(NAME)

$(NAME) : $(FILES)
	$(CXX) $(CXXFLAGS) $(FILES) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all

.PHONY: all clean fclean re
