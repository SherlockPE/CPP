# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/11 12:36:14 by flopez-r          #+#    #+#              #
#    Updated: 2024/11/08 11:22:51 by flopez-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

OBJ_DIR =	obj
SOURCES =	main.cpp \
			BitcoinExchange.cpp \
			open_files.cpp \
			Utils.cpp
			

MAKE_DIR = mkdir -p
SRC = $(SOURCES)
OBJ = $(SRC:.cpp=.o)
OBJ := $(addprefix $(OBJ_DIR)/, $(OBJ))

INCLUDES := -I includes
CPPC = c++
CPPVERSION = -std=c++98
CPPFLAGS = -Wall -Wextra -Werror $(CPPVERSION) -fsanitize=address -g3

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
	rm -f *_shrubbery

re: fclean all

.PHONY : all clean fclean re