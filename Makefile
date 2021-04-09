##
## EPITECH PROJECT, 2019
## Makefile rush 2
## File description:
## Makefile
##

SRC		=		src/main.c \
				src/scene.c \
				src/struct_fill.c \
				src/initialisation.c \
				src/play/play.c \
				src/play/struct_play.c \
				src/play/interface/interface.c \
				src/play/interface/inventory.c \
				src/initialisation2.c \
				src/play/space_map/struct_space_map.c \
				src/play/space_map/space_map.c \
				src/initialisation3.c \
				src/play/space_map/direction_ship.c \
				src/play/space_map/moove_ship.c \
				src/play/space_map/moove_map.c \
				src/play/space_map/check_limit.c \

OBJ		=		$(SRC:.c=.o)

INC		=		-include src/include/my_rpg.h -include src/include/struct.h -include src/include/include.h -include src/include/struct_play.h

CFLAGS	=		-l csfml-graphics -l csfml-window -l csfml-system -l csfml-audio -Wall -Wextra -g -lm

NAME	=	my_rpg

all:		$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(INC)

clean:
	rm	-f 	$(OBJ)

fclean: clean
	rm 	-f 	$(NAME)

re:	clean fclean all