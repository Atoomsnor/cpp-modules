# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roversch <roversch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/23 14:02:13 by roversch          #+#    #+#              #
#    Updated: 2025/12/23 15:53:06 by roversch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= harlFilter

CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror
DEPFLAGS	= -MMD
INCLUDES	= -I ./inc

SRC_DIR		= src
SRC			= main.cpp HarlFilter.cpp

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