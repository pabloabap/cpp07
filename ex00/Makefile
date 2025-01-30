# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/30 17:19:52 by pabad-ap          #+#    #+#              #
#    Updated: 2025/01/30 17:19:56 by pabad-ap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= whatever

CPP		= c++
CPP_FLAGS	= -Wall -Wextra -Werror

HEADERS		= whatever.hpp
SRC		= main.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPP_FLAGS) $(OBJ) -o $(NAME)
	
%.o:%.cpp $(HEADERS) Makefile
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
