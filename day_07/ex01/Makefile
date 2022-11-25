CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -pedantic-errors -Wctor-dtor-privacy -Wnon-virtual-dtor -Wold-style-cast -Woverloaded-virtual -Wsign-promo -Wfloat-equal -Wshadow -Wcast-qual -Wzero-as-null-pointer-constant -Wextra-semi -Wsign-conversion -std=c++98 -Wshadow -Wno-shadow -g

SRC		=	main		

OBJ_DIR	=	obj
OBJ		=	$(addprefix $(OBJ_DIR)/,$(SRC:=.o))

HEADER_DIR	=	.
HEADER		=	iter.hpp

NAME		=	iter

.PHONY:	all clean fclean re

all:	$(OBJ_DIR)
	$(MAKE) -j $(NAME)


clean:
	rm -rf $(OBJ_DIR)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

$(OBJ_DIR):
	mkdir -p $@

$(OBJ_DIR)/%.o:	%.cpp Makefile
	$(CC) $(CFLAGS) $< -c -o $@ 

$(NAME):	$(OBJ) $(HEADER_DIR)/$(HEADER)
	$(CC) $(OBJ) -o $@

