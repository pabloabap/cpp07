# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/30 17:20:06 by pabad-ap          #+#    #+#              #
#    Updated: 2025/01/30 17:20:08 by pabad-ap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= array

CPP		= c++
CPP_FLAGS	= -Wall -Wextra -Werror

HEADERS		= Array.hpp
SRC		= main.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	 $(CPP) $(CPP_FLAGS) -I. $(OBJ) -o $(NAME)
	
%.o: %.cpp $(HEADERS) Makefile
	$(CPP) $(CPP_FLAGS) -I. -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
