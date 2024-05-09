# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/03 16:45:46 by fabriciolop       #+#    #+#              #
#    Updated: 2024/05/09 13:01:55 by fabriciolop      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR = src
UTILS_DIR = utils
OBJ_DIR = obj

RED =			\033[0;91m
GREEN =			\033[0;92m
CYAN =			\033[0;96m
BLUE=			\033[0;34m
PURPLE=			\033[0;35m
YELLOW =		\033[0;93m
RESET=			\033[0m

SOURCES =	add_contact.cpp \
			exit_program.cpp \
			get_input.cpp \
			get_int.cpp \
			main.cpp \
			manage_options.cpp \
			print_contact_table.cpp \
			print_menu.cpp \
			print_title.cpp \
			search.cpp

UTILS	=	ft_atoi.cpp \
			ft_strcmp.cpp \
			ft_strlen.cpp \
			print_col.cpp \
			put_field.cpp \
			put_header.cpp \
			put_line.cpp \
			put_row.cpp \
			put_separator.cpp \
			string_upper.cpp

NAME = phone_book
INCLUDE = -I include

SRC := $(addprefix $(SRC_DIR)/, $(SOURCES)) 
UTLS := $(addprefix $(UTILS_DIR)/, $(UTILS))


OBJ = $(SRC:.cpp=.o) $(UTLS:.cpp=.o)
OBJ := $(addprefix $(OBJ_DIR)/, $(OBJ))

MDIR := mkdir -p
CPPC := c++
CPPFLAGS := -Wall -Wextra -Werror -g3

# print:
# 	@echo "$(SRC)"
# 	@echo "$(OBJ)"

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@echo "Creating object directories"
	$(MDIR) $(OBJ_DIR)
	$(MDIR) $(OBJ_DIR)/$(SRC_DIR)
	$(MDIR) $(OBJ_DIR)/$(UTILS_DIR)

$(NAME): $(OBJ)
	$(CPPC) $(CPPFLAGS) $(INCLUDE) $(OBJ) -o $(NAME)

# $(OBJ_DIR)/$(SRC_DIR)/%.o: $(SRC_DIR)/%.cpp
# 	$(CPPC) $(CPPFLAGS) $(INCLUDE) -c $< -o $@
$(OBJ_DIR)/%.o: %.cpp
	$(CPPC) $(CPPFLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

