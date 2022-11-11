CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC		=	main.cpp		\
			Contact.cpp		\
			PhoneBook.cpp
OBJ_DIR	=	obj
OBJ		=	$(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.o))

NAME	=	phone

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

$(OBJ_DIR)/%.o:	%.cpp
	$(CC) $(CFLAGS) $< -c -o $@

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $@
