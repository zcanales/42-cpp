NAME = Braiiinnzz

SRC = main.cpp\
	Zombie.cpp\
	newZombie.cpp\
	randomChump.cpp\

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

re : fclean all

.PHONY: all clean fclean re


