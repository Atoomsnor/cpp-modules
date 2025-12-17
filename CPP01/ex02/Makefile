# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roversch <roversch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/17 17:06:28 by roversch          #+#    #+#              #
#    Updated: 2025/12/17 17:06:59 by roversch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= out

CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror
DEPFLAGS	= -MMD
INCLUDES	= -I .

SRC_DIR		= src
SRC			= main.cpp

OBJ_DIR		= obj
OBJ			= $(SRC:%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ) Makefile
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR):
	mkdir -p $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp Makefile | $(OBJ_DIR)
	$(CPP) -c $(CPPFLAGS) $(DEPFLAGS) $(INCLUDES) $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include $(OBJ:.o=.d)