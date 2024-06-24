NAME = polymorph

OBJ_DIR =	obj
SOURCES =	AMateria.cpp \
			Character.cpp \
			Cure.cpp \
			Ice.cpp \
			main.cpp \
			MateriaSource.cpp \

MAKE_DIR = mkdir -p 
SRC = $(SOURCES)
OBJ = $(SRC:.cpp=.o)
OBJ := $(addprefix $(OBJ_DIR)/, $(OBJ))

INCLUDES := -I includes
CPPC = c++
CPPVERSION = -std=c++98
CPPFLAGS = -Wall -Wextra -Werror $(CPPVERSION) #-g3 -fsanitize=address 

all: c_dir $(NAME)

leaks: $(NAME)
	valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="leaks.log" ./$(NAME) # --verbose

$(NAME): $(OBJ)
	$(CPPC) $(CPPFLAGS) $(OBJ) -o $@

$(OBJ_DIR)/%.o: %.cpp
	$(CPPC) $(CPPFLAGS) $(INCLUDE) -c $< -o $@

c_dir:
	$(MAKE_DIR) $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)
	rm -rf leaks.log

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
