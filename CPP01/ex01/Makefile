NAME = horde

SRC = ./main.cpp ./Zombie.cpp ./zombieHorde.cpp
OBJ = ${SRC:.cpp=.o}

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	c++ $(CPPFLAGS) -c $< -o $@

re: fclean all

clean:
	rm -fr $(OBJ)

fclean:	clean
	rm -f $(NAME)

SILENT:
