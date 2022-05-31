NAME = Identify_Real_Type

SRC = main.cpp\
	Base.cpp\
	A.cpp\
	B.cpp\
	C.cpp\

OBJ = $(SRC:.cpp=.o)

INCLUDE = Base.hpp\
		A.hpp\
		B.hpp\
		C.hpp\

CC = clang++

FLAG =  -Wall -Wextra -Werror #'-g3 -fsanitize=address

all : $(NAME)

$(NAME) : $(OBJ) $(INCLUDE)
	$(CC) $(FLAG) $(OBJ) -I. -o $(NAME)

%.o : %.cpp
		$(CC) $(FLAG) -c $< -o $@

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)
	rm -rf $(NAME).dSYM

re : fclean all

.PHONY: all clean fclean re


