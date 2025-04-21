# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/11 12:36:14 by flopez-r          #+#    #+#              #
#    Updated: 2024/11/24 14:07:49 by flopez-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe
SRC_DIR = src
OBJ_DIR =	obj
SOURCES =	main.cpp \
			PmergeMe.cpp \
			ford_jhonson.cpp \
			generate_insertion_order.cpp \
			last_insertion_vector.cpp \
			make_and_sort_pairs.cpp \
			recursive_sort.cpp \


MAKE_DIR = mkdir -p
SRC = $(addprefix $(SRC_DIR)/, $(SOURCES))
OBJ = $(SRC:.cpp=.o)
OBJ := $(addprefix $(OBJ_DIR)/, $(OBJ))

INCLUDE := -I includes
CPPC = c++
CPPVERSION = -std=c++98
CPPFLAGS = -Wall -Wextra -Werror -g3 $(CPPVERSION) -fsanitize=address -g3

all: c_dir $(NAME)

$(NAME): $(OBJ)
	$(CPPC) $(CPPFLAGS) $(INCLUDE) $(OBJ) -o $@

$(OBJ_DIR)/%.o: %.cpp
	$(CPPC) $(CPPFLAGS) $(INCLUDE) -c $< -o $@

c_dir:
	@$(MAKE_DIR) $(OBJ_DIR)/$(SRC_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)
	rm -f *_shrubbery

re: fclean all

.PHONY : all clean fclean