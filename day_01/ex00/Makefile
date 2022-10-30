NAME = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:cpp=o)

CCXX = g++

CXXFLAGS = -Wall -Wextra -Werror

STANDART = -std=c++98

%.o: %.cpp Makefile
	$(CCXX) $(STANDART) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CCXX) $(OBJ) -o $(NAME)

all:
	$(MAKE) $(NAME)

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all


