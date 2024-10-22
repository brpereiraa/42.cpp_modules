NAME = brain

SRC = ./main.cpp
OBJ = $(SRC:.cpp=.o)

ALL: $(NAME)

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

