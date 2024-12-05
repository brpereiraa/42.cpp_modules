NAME = human

SRC = ./HumanA.cpp ./HumanB.cpp ./Weapon.cpp ./main.cpp
OBJ = $(SRC:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

$.o: $.cpp
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

re: fclean all

clean:
	rm -fr $(OBJ)

fclean:	clean
	rm -f $(NAME)

SILENT:
