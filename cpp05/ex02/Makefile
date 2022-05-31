NAME = FormType

SRC =	main.cpp\
		Bureaucrat.cpp\
		AForm.cpp\
		ShrubberyCreationForm.cpp\
		RobotomyRequestForm.cpp\
		PresidentialPardonForm.cpp\

OBJ = $(SRC:.cpp=.o)

INCLUDE = AForm.hpp\
		Bureaucrat.hpp\
		ShrubberyCreationForm.hpp\
		RobotomyRequestForm.hpp\
		PresidentialPardonForm.hpp\

CC = clang++

FLAG =  -Wall -Wextra -Werror #-g3 -fsanitize=address

all : $(NAME)

$(NAME) : $(OBJ) $(INCLUDE) $(SRC)
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


