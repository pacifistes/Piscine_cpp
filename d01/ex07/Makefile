NAME = replace
FLAGS = -Wall -Wextra -Werror
OBJ= $(SRC:.cpp=.o)
CC = clang++

SRC = main.cpp

%.o: %.cpp
	$(CC) -c $(FLAGS)  $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ) 

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME) $(OBJ)

re: fclean all

.PHONY: all clean fclean re