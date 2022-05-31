NAME = FragTrap

SRC = main.cpp\
	ClapTrap.cpp\
	ScavTrap.cpp\
	FragTrap.cpp\

OBJ = $(SRC:.cpp=.o)

INCLUDE = ClapTrap.hpp\
			ScavTrap.hpp\
			FragTrap.hpp\

CC = clang++

FLAG =  -Wall -Wextra -Werror

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


