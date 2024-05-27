# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/26 21:35:43 by fabriciolop       #+#    #+#              #
#    Updated: 2024/05/27 15:33:58 by flopez-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replacer

OBJ_DIR =	obj
SOURCES =	main.cpp \
			Replacer.cpp

MAKE_DIR = mkdir -p
SRC = $(SOURCES)
OBJ = $(SRC:.cpp=.o)
OBJ := $(addprefix $(OBJ_DIR)/, $(OBJ))

INCLUDES := -I includes
CPPC = c++
CPPVERSION = -std=c++98
CPPFLAGS = -Wall -Wextra -Werror $(CPPVERSION)

all: c_dir $(NAME)

$(NAME): $(OBJ)
	$(CPPC) $(CPPFLAGS) $(OBJ) -o $@

$(OBJ_DIR)/%.o: %.cpp
	$(CPPC) $(CPPFLAGS) $(INCLUDE) -c $< -o $@

c_dir:
	$(MAKE_DIR) $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
