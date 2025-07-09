NAME = form 

SRC = ./Bureaucrat.cpp ./main.cpp ./Form.cpp
OBJ = $(SRC:.cpp=.o)

CPPFLAGS = -Wextra -Werror -Wall -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	c++ $(CPPFLAGS) -c $< -o $@

re: fclean all
	
clean:
	rm -fr $(OBJ)

fclean: clean
	rm -fr $(NAME)

SILENT:	