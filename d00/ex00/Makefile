NAME = megaphone
FLAGS = -Wall -Wextra -Werror
SRC = megaphone.cpp
OBJ= $(SRC:.cpp=.o)
CC = clang++

%.o: %.cpp   $(CC) -o $@ -c $< $(FLAGS)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME) $(OBJ)

re: fclean all

.PHONY: all clean fclean re