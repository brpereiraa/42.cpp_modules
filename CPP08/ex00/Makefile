NAME = span

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++ -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME):	$(OBJ)
		c++ -o $@ $(OBJ)

%.o:%.cpp
	$(CC) -c $< -o $@

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re: fclean all
