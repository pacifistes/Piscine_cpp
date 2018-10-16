# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/08 09:25:15 by cpoulet           #+#    #+#              #
#    Updated: 2018/01/14 18:43:19 by cpoulet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	ft_retro
FILE	:=	main.cpp AGameEntity.cpp Enemy.cpp Game.cpp GameController.cpp \
			Map.cpp Missile.cpp Player.cpp

I_PATH	:=	includes/
INC		:=	AGameEntity.hpp Enemy.hpp Game.hpp GameController.hpp Map.hpp \
			Missile.hpp Player.hpp

FLAGS	:= 	-Wall -Wextra -Werror
CC		:= 	clang++
LIB		:=	-lncurses

O_PATH	:= objs/
OBJ		:= $(addprefix $(O_PATH), $(FILE:.cpp=.o))

GREEN	:= 	"\x1B[1;32m"
RED		:= 	"\x1B[1;31m"
EOC		:= 	"\x1B[0m"

all : $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(FILE) $(LIB) -o $@
	@echo $(GREEN)"Compiling binary file..."$(EOC)

$(O_PATH)%.o: %.cpp $(INC)
	@mkdir -p $(O_PATH)
	@$(CC) $(FLAGS) -c $< -I $(I_PATH) -o $@
	@echo $(GREEN)"Compiling objects..."$(EOC)

clean :
	@rm -rf $(O_PATH)
	@echo $(RED)"Deleting objects..."$(EOC)

fclean : clean
	@rm -f $(NAME)
	@echo $(RED)"Deleting binary file..."$(EOC)

re : fclean all

.PHONY : all clean fclean re
