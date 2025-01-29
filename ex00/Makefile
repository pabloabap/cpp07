# CABECERA

NAME		= whatever

CPP		= c++
CPP_FLAGS	= -Wall -Wextra -Werror

SRC		= main.cpp

OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPP_FLAGS) $(OBJ) -o $(NAME)
	
%.o:%.cpp whatever.hpp
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
