################################################################################
# Basics                                                                       #
################################################################################

NAME		= Array
CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror -MMD -std=c++11

################################################################################
# Source files                                                                 #
################################################################################

INCLUDES	= -I ./inc

SRC_DIR		= src
SRC			= main.cpp

OBJ_DIR		= obj
OBJ			= $(SRC:%.cpp=$(OBJ_DIR)/%.o)

################################################################################
# Rules                                                                        #
################################################################################

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