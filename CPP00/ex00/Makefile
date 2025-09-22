# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roversch <roversch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/16 16:59:03 by roversch          #+#    #+#              #
#    Updated: 2025/09/16 17:22:56 by roversch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
SRC			= megaphone.cpp

OBJ_DIR		= objects
OBJ			= $(SRC:%.cpp=$(OBJ_DIR)/%.o)

CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror
DEPFLAGS	= -MMD -MP

all: $(NAME)

$(NAME): $(OBJ) Makefile
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR):
	mkdir -p $@

$(OBJ_DIR)/%.o: %.cpp Makefile | $(OBJ_DIR)
	$(CPP) $(CPPFLAGS) $(DEPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re

-include $(OBJ:.o=.d)