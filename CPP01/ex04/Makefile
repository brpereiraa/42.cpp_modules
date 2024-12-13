NAME = sed

SRCS = main.cpp

OBJS = ${SRCS:.cpp=.o}

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

$(NAME): ${OBJS}
		c++ ${CPPFLAGS} ${OBJS} -o ${NAME}

%.o: %.cpp
	c++ $(CPPFLAGS) -c $< -o $@
		
all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

# .SILENT: