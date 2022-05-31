NAME = BSP

SRC =	main.cpp\
	Fixed.cpp\
	Point.cpp\
	bsp.cpp\

OBJ = $(SRC:.cpp=.o)

INCLUDE = Fixed.hpp\
		Point.hpp\

CC = c++

FLAG =  -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAG) $(SRC) -I. -o $(NAME)

%.o :: %.cpp
		$(CC) $(FLAG) -c $< -o $@

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re


