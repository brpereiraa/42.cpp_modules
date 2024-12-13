NAME = strings

SRC = ./main.cpp
OBJ = $(SRC:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	c++ $(CPPFLAGS) -c $< -o $@

re: fclean all

fclean: clean
	rm -fr $(NAME)

clean:
	rm -fr $(OBJ)

SILENT:

