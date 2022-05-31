NAME = DiamondTrap

SRC = main.cpp\
	ClapTrap.cpp\
	ScavTrap.cpp\
	FragTrap.cpp\
	DiamondTrap.cpp\

OBJ = $(SRC:.cpp=.o)

INCLUDE = ClapTrap.hpp\
			ScavTrap.hpp\
			FragTrap.hpp\
			DiamondTrap.hpp\

CC = clang++

FLAG =  -Wall -Wextra -Werror  -Wno-shadow

all : $(NAME)

$(NAME) : $(OBJ) $(INCLUDE)
	$(CC) $(FLAG) $(OBJ) -I. -o $(NAME)

%.o : %.cpp
		$(CC) $(FLAG) -c $< -o $@

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re


