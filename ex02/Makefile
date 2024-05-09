# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/09 17:47:55 by fabriciolop       #+#    #+#              #
#    Updated: 2024/05/09 17:52:16 by fabriciolop      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:	start_test

SRC:	tests.cpp \
		Account.cpp

CPPFLAGS: -Wall -Wextra -Werror

CPPC := c++;
OBJ:	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPPC) $(CPPFLAGS) $(OBJ) -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
