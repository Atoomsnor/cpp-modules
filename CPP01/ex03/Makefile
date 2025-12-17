# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roversch <roversch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/17 17:23:47 by roversch          #+#    #+#              #
#    Updated: 2025/12/17 17:24:47 by roversch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= out

CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror
DEPFLAGS	= -MMD
INCLUDES	= -I ./inc

SRC_DIR		= src
SRC			= main.cpp weapon.cpp humanA.cpp humanB.cpp

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