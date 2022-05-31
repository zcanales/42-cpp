NAME = Moar_brainz

SRC = main.cpp\
	Zombie.cpp\
	ZombieHorde.cpp\

INCLUDE = Zombie.hpp\

CC = clang++

FLAG =  -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(SRC) $(INCLUDE)
	$(CC) $(FLAG) $(SRC) -I. -o $(NAME)

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)
	rm -rf $(NAME).dSYM

re : fclean all

.PHONY: all clean fclean re


