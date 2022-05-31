NAME = Fixed_Point_Class

SRC =	main.cpp\
	Fixed.cpp\

OBJ = $(SRC:.cpp=.o)

INCLUDE = Fixed.hpp\

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


