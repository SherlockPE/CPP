# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 16:48:49 by fabriciolop       #+#    #+#              #
#    Updated: 2024/05/10 23:36:26 by fabriciolop      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombies00

SRC =	Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp \
		main.cpp

OBJ = $(SRC:.cpp=.o)

CPPC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CPPC) $(CPPFLAGS) $(OBJ) -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
	
	
	




		