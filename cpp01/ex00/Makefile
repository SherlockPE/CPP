# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 16:48:49 by fabriciolop       #+#    #+#              #
#    Updated: 2024/05/10 17:06:23 by fabriciolop      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zoOOmmbiEsS

SRC =	Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp

OBJ = $(SRC:.cpp=.o)

CPPC = c++
CPPFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CPPC) $(CPPFLAGS) $(OBJ) -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -r $(NAME)

re: fclean all

.PHONY : all clean fclean re
	
	
	




		