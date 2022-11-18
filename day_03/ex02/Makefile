CC		=	g++
CFLAGS	=	-Wall -Wextra -Werror -pedantic-errors -std=c++98

SRC		=	main		\
			ClapTrap	\
			ScavTrap	\
			FragTrap

OBJ_DIR	=	obj
OBJ		=	$(addprefix $(OBJ_DIR)/,$(SRC:=.o))

HEADER_DIR	=	.
HEADER		=	ClapTrap.hpp	\
				ScavTrap.hpp	\
				FragTrap.hpp

NAME	=	FragTrap

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
