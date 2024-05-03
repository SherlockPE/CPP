# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/03 16:45:46 by fabriciolop       #+#    #+#              #
#    Updated: 2024/05/03 18:59:18 by fabriciolop      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC_DIR = src
OBJ_DIR = obj

SOURCES =	add_contact.cpp \
			display_contacts.cpp \
			main.cpp \
			get_input.cpp \
			manage_options.cpp
NAME = phone_book
INCLUDE = -I include

SRC := $(addprefix $(SRC_DIR)/, $(SOURCES)) 
OBJ = $(SRC:.cpp=.o)
OBJ := $(addprefix $(OBJ_DIR)/, $(OBJ))

MDIR := mkdir -p
CPPC := c++
CPPFLAGS := -Wall -Wextra -Werror

# print:
# 	@echo "$(SRC)"
# 	@echo "$(OBJ)"

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	$(MDIR) $(OBJ_DIR)
	$(MDIR) $(OBJ_DIR)/$(SRC_DIR)

$(NAME): $(OBJ)
	$(CPPC) $(CPPFLAGS) $(INCLUDE) $(OBJ) -o $(NAME)

$(OBJ_DIR)/$(SRC_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CPPC) $(CPPFLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

