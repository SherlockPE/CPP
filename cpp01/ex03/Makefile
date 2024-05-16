# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/11 15:46:03 by flopez-r          #+#    #+#              #
#    Updated: 2024/05/16 14:26:53 by flopez-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pointers_and_references

OBJ_DIR =	obj
SRC_DIR =	src
SOURCES =	main.cpp \
			Weapon.cpp \
			HumanA.cpp

MAKE_DIR = mkdir -p
SRC = $(addprefix $(SRC_DIR)/, $(SOURCES))
OBJ = $(SRC:.cpp=.o)
OBJ := $(addprefix $(OBJ_DIR)/, $(OBJ))

INCLUDES := -I includes
CPPC = c++
CPPVERSION = -std=c++98
CPPFLAGS = -Wall -Wextra -Werror $(CPPVERSION) $(INCLUDES)

all: c_dir $(NAME)

$(NAME): $(OBJ)
	$(CPPC) $(CPPFLAGS) $(OBJ) -o $@

$(OBJ_DIR)/%.o: %.cpp
	$(CPPC) $(CPPFLAGS) $(INCLUDE) -c $< -o $@

c_dir:
	$(MAKE_DIR) $(OBJ_DIR)
	$(MAKE_DIR) $(OBJ_DIR)/$(SRC_DIR)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
