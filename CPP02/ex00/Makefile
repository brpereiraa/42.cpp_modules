NAME = form

SRC = ./main.cpp ./Fixed.cpp
OBJ = $(SRC:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	c++ $(CPPFLAGS) -c $< -o $@

re: fclean all

clean:
	rm -fr $(OBJ)

fclean: clean
	rm -fr $(form)

SILENT:	

