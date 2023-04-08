CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -pedantic-errors -std=c++98

SRC		=	RPN main

OBJ_DIR	=	obj
OBJ		=	$(addprefix $(OBJ_DIR)/,$(SRC:=.o))

HEADER_DIR	=	.
HEADER		=	RPN.hpp

NAME		=	RPN

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

